#for finding the max]
n1=int(input("n1="))
n2=int(input("n2="))
n3=int(input("n3="))
if(n1>=n2 and n1>=n3):
    mx=n1
elif(n2>=n1 and n2>=n3):
    mx=n2
else:
    mx=n3
#for finding the min
if(n1<=n2 or n1<=n3):
    mn=n1
elif(n2<=n3 or n2<=n1):
    mn=n2
else:
    mn=n3
#for finding the middle num
if(n1>=mn or n1<=mx):
    print(n1)
elif(n2<=mn or n2>=mx):
    print(n2)
else:
    print(n3)



