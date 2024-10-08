# a='python language is a coding language'
# print("the reverse is",a[::-1])
# a=5
# a=a * a-- + --a + a/2
# b=++a + a++ + a%2
# print(a,b)

num1=100
num2=120
print("The prime numbers between",num1,"and",num2,"are",end="\n")
for num in range(num1,num2+1):
    if num>1:
        for i in range(2,num):
            if (num%i)==0:
                break
        else:
            print(num)