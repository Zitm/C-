a=int(input())
if a<=2e9:
    c=0
    for i in range(1,a+1):
        if a%i==0:
            c+=1
    print(c)
