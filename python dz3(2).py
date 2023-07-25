word=input()
su=0
a=0
e=0
i=0
o=0
u=0

for let in word:
    if let=="a":
        a+=1
        su+=1
    elif let=="e":
        e+=1
        su+=1
    elif let=="i":
        i+=1
        su+=1
    elif let=="o":
        o+=1
        su+=1
    elif let=="u":
        u+=1
        su+=1
if a>0:
    print("букв a=",a)
else:
    print("False")
if e>0:
    print("букв e=",e)
else:
    print("False")
if i>0:
    print("букв i=",i)
else:
    print("False")
if o>0:
    print("букв o=",o)
else:
    print("False")
if u>0:
    print("букв u=",u)
else:
    print("False")

print("всего глассных=",sum([a,e,i,o,u]),"всего согласных=",len(word)-sum([a,e,i,o,u]))