li=list(map(str,input("enter strings (comma seperated)\n").split(",")))
res=[]
for i in li:
    for j in i:
        if j not in res:
            res.append(j)
res.sort()
print("".join(res))
