# print(r"\" \n \t \'")#raw text strings by using r.

#print an emoji
# print("\U0001F606")

#string formatting
# name="nithin"
# age=20
# print(f"My name is {name} and age is {age}")#python 3.6
# print("my name is {} and my age is {}".format(name, age))#python 3.0
#ex_2
num1,num2,num3=input("Enter the three numbers:").split(",")
avg=(int(num1)+int(num2)+int(num3))/3
print(f"The avg of {num1},{num2},{num3} is {avg}")