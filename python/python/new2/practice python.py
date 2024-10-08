# ## To create a program to add and multiply two numbers? 

# # def add(a,b):
# #     sum=(a+b)
# #     return sum     

# # def sub(a,b):
# #     subs=(a*b)
# #     return subs

# # a=int(input())    
# # b=int(input())
# # sum=add(a,b)
# # subs=sub(a,b)
# # print(sum)
# # print(subs)
#To print a palindrome using def

def pal(x):
    x1=x[::-1]
    if x==x[::-1]:
        return "palindrome"
    else:
        return "Not a palindrome" 

x=input("enter:")
print(pal(x))

# #importing module [palindrome]
# '''from mod1 import pal
# x=input()
# print(pal(x))

# #print("hlo \"hi\" world")

# # def main(a,b):
# #     s=(a+b)
# #     return s
 
# # a=int(input())
# # b=int(input())
# # s=main(a,b)
# # print(s)    

# #print("this is \\\\ dobule backslash")
# #print("this is /\\/\\/\\/\\/\\ mountain")
# #print("he is\tawesome")
# #print('\\" \\n \\t \\\'')
# #print(r"hello \n python")
# # name,age=input("enter your name and age").split(",")
# # print(name)
# # print(age)
# # formatting by clean syntax method python(3.6)
# # name="nani"
# # age=2
# # print(f"hello {name} your age is {age}")
# #tTo print the avg by string formatting
# #x,y,z=input("enter three num").split(",")
# #print(f"avg is:{(int(x)+int(y)+int(z))/3}")
# #To print reverse string using step slicing
# # n=input()
# # print(f"the reverse word is {n[::-1]}")
# #To count a chr in insensitive mode
# # x,y=input("name and ch").split(",")
# # print(len(x))
# # print(x.lower().count(y.lower()))
#  #to remove spaces 
# # name="    harshen    "
# # method1 print(name.strip())
# # method2 print(name.replace(" ",""))
# # to find num of words in a string
# # name="she is good she is her is beautiful"
# # n=name.find("is")
# # print(name.find("is",n+1))
# #  to add chr or str to string
# # n=input("enter:")
# # print(n.center(len(n)+8,"*"))
# #number guessing game
# # import random
# # num=random.randint(0,100)
# # print(num)
# # x=int(input("guess:"))
# # if x==num:
# #     print("YOU WIN")
# # elif x<num:
# #     print("too low")
# # else:
# #     print("too high")        
# #to allow to watch movie
# # name,age=input("enter name and age").split(",")
# # if name[0]=="a" or name[0]=="A" and age>=10:
# #     print("you can watch the movie")
# # else:
# #     print("sorry,you cannot watch coco")    
# #to check weather the string is empty or not
# # var=input("enter:")
# # if var:
# #     print("proceed")
# # else:
# #     print("enter")
# # to print the sum of num by while loop
# # n=int(input("enter num:"))
# # sum=0
# # i=1
# # while i<=n:
# #     sum=sum+i
# #     i=i+1
# #     print(sum)
#     # number guessing game
# # import random
# # num=random.randint(0,100)
# # print(num)
# # x=int(input("guess:"))
# # if x==num:
# #     print("YOU WIN")
# # elif x<num:
# #     print("too low")
# # else:
# #     print("too high")


# # modified the game
# # import random
# # num=random.randint(0,100)
# # guess=1
# # n=int(input("guess the number: "))
# # guess_=False

# # while not guess_:
# #     if n==num:
# #         print(f"The number is correct,and you guessed {guess} times")
# #         guess_=True
# #     else:
# #         if n>num:
# #             print("Too high")
            
# #         else:
# #             print("Too low")

# #         guess+=1
# #         n=int(input("guess again: "))

# # if guess>5:
# #     print("Retry")
# # else:
# #     print("Pass")    

# #inheritance
# # class phone:
# #     def __init__(self,brand,model_num,gpu) :
# #         self.brand=brand
# #         self.model_num=model_num
# #         self.gpu=gpu
# #     def full_name(self):
# #         return f"{self.brand},{self.model_num}"
# #     def make_call(self,number):
# #         return f"calling {number}"
            

# #palindrome
# # def pal(a):
# #     b=a[::-1]
# #     if b==a:
# #         return 'palindrome'
# #     else:
# #         return "Not a Palindrome"    

# # a=input()
# # print(pal(a))

# #fibonacci
# # def fib(n):
# #     a=0
# #     b=1
# #     if n==1:
# #         print(a)
# #     elif n==2:
# #         print(a, b)
# #     else:
# #         print(a,b,end=" ")    
# #         for i in range(n-2):
# #             c=a+b
# #             a=b
# #             b=c
# #             print(c,end=" ")


# # fib(int(input("enter: ")))

# # list functions
# # def num(lis):
# #     l=[]
# #     for i in lis:
# #         l.append(i**2)
# #     return l

# # x=int(input('enter:'))
# # n=list(range(1,int(input('enter:'))+1))
# # print(num(n))



