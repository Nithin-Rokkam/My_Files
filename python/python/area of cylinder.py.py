# R  = float(input("enter the value of radius="))
# h  = float(input("enter the value of hight"))
# A  = 3.14*(R**2)*h
# print ("area=",format(A,"3f"))


# age=int(input("Enter the age: "))
# if age>0 and age<18:
#     print("you are minor")
# elif age>=18 and age<65:
#     print("you are adult")
# elif age>65:
#     print("You are senior citizen"+" and your age is "+str(age))
# else:
#     print("Enter valid age")


#comparing two strings lexographically
# a="apple"
# a1=0
# b="Apple"
# b=b.lower()
# b1=0
# for i in a:
#     a1+=ord(i)
# for i in b:
#     b1+=ord(i)

# if a1==b1:
#     print(True)
# else:
#     print(False)



#mapping a function
def product(num):
    return num*num

num_list=[]
length=int(input("number:"))
for i in range(length):
    element=int(input("enter {} element:".format(i+1)))
    num_list.append(element)

result=map(product,num_list)
list_result=list(result)
print(list_result)
