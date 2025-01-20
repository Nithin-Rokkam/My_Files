import nltk
import random
import string
import warnings
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.metrics.pairwise import cosine_similarity

nltk.download('punkt')
nltk.download('wordnet')

warnings.filterwarnings("ignore")

# Open files
with open(r"C:\Users\nithi\OneDrive\Desktop\programs\python\python\NLP_PyChatBot\bot.py", 'r', errors='ignore') as f:
    raw = f.read().lower()

with open(r"C:\Users\nithi\OneDrive\Desktop\programs\python\python\NLP_PyChatBot\gui.py", 'r', errors='ignore') as m:
    rawone = m.read().lower()

# Tokenize sentences and words
sent_tokens = nltk.sent_tokenize(raw)
word_tokens = nltk.word_tokenize(raw)
sent_tokensone = nltk.sent_tokenize(rawone)
word_tokensone = nltk.word_tokenize(rawone)

lemmer = nltk.stem.WordNetLemmatizer()
def LemTokens(tokens):
    return [lemmer.lemmatize(token) for token in tokens]

remove_punct_dict = dict((ord(punct), None) for punct in string.punctuation)

def LemNormalize(text):
    return LemTokens(nltk.word_tokenize(text.lower().translate(remove_punct_dict)))

# Responses
Introduce_Ans = ["My name is PyBot.", "My name is PyBot you can call me Pi.", "I'm PyBot :)", "My name is PyBot and my nickname is Pi. I'm happy to solve your queries :)"]

GREETING_INPUTS = ("hello", "hi", "hiii", "hii", "hey", "what's up")
GREETING_RESPONSES = ["hi", "hey", "hii there", "hello", "I'm glad you're talking to me"]

Basic_Q = ("what is python?", "what is python", "what is python?")
Basic_Ans = "Python is a high-level, interpreted, interactive and object-oriented scripting language. It uses English keywords frequently and has fewer syntactical constructions than other languages."

Basic_Om = ("what is a module?", "what is module?", "what is a module", "what is module in python?")
Basic_AnsM = ["A module is a file containing a set of functions you want to include in your application.", "A module can define functions, classes, and variables. It can also include runnable code."]

# Checking for greetings
def greeting(sentence):
    """If user's input is a greeting, return a greeting response"""
    for word in sentence.split():
        if word.lower() in GREETING_INPUTS:
            return random.choice(GREETING_RESPONSES)

# Checking for Basic_Q
def basic(sentence):
    for word in Basic_Q:
        if sentence.lower() == word:
            return Basic_Ans

# Checking for Basic_QM
def basicM(sentence):
    """If user's input is about modules, return a response"""
    for word in Basic_Om:
        if sentence.lower() == word:
            return random.choice(Basic_AnsM)

# Checking for Introduce
def IntroduceMe(sentence):
    return random.choice(Introduce_Ans)

def response(user_response):
    robo_response = ''
    sent_tokens.append(user_response)
    TfidfVec = TfidfVectorizer(tokenizer=LemNormalize, stop_words='english')
    tfidf = TfidfVec.fit_transform(sent_tokens)
    vals = cosine_similarity(tfidf[-1], tfidf)
    idx = vals.argsort()[0][-2]  # Get the index of the most similar sentence
    flat = vals.flatten()
    flat.sort()
    req_tfidf = flat[-2]
    
    if req_tfidf == 0:
        robo_response = "I am sorry! I don't understand you"
    else:
        # Prevent the bot from responding with the user's exact input
        if sent_tokens[idx] != user_response:
            robo_response = sent_tokens[idx]
        else:
            # If the bot's most similar response is the user's input, it needs to provide something else
            robo_response = "I am sorry! I don't have a suitable answer for you right now."
    
    sent_tokens.remove(user_response)  # Remove the user input from the list after processing
    return robo_response

def responseone(user_response):
    robo_response = ''
    sent_tokensone.append(user_response)
    TfidfVec = TfidfVectorizer(tokenizer=LemNormalize, stop_words='english')
    tfidf = TfidfVec.fit_transform(sent_tokensone)
    vals = cosine_similarity(tfidf[-1], tfidf)
    idx = vals.argsort()[0][-2]
    flat = vals.flatten()
    flat.sort()
    req_tfidf = flat[-2]
    
    if req_tfidf <= 0:
        robo_response = "I am sorry! I don't understand you"
    else:
        # Prevent the bot from responding with the user's exact input
        if sent_tokensone[idx] != user_response:
            robo_response = sent_tokensone[idx]
        else:
            robo_response = "I am sorry! I don't have a suitable answer for you right now."
    
    sent_tokensone.remove(user_response)  # Remove the user input from the list after processing
    return robo_response


# Chat function
def chat(user_response):
    user_response = user_response.lower()
    keyword = "module"

    if user_response != 'bye':
        if user_response in ('thanks', 'thank you'):
            return "You are welcome.."
        elif basicM(user_response) is not None:
            return basicM(user_response)
        elif keyword in user_response:
            return responseone(user_response)
        elif greeting(user_response) is not None:
            return greeting(user_response)
        elif "your name" in user_response:
            return IntroduceMe(user_response)
        elif basic(user_response) is not None:
            return basic(user_response)
        else:
            return response(user_response)
    else:
        return "Bye! take care.."