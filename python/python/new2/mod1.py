def pal(x):
    #x1=x[::-1]
    if x==x[::-1]:
        return "palindrome"
    else:
        return "Not a palindrome" 
x=input()
print(pal(x))
