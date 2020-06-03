t=int(input())
for i in range(t):
    n=int(input())
    x=[]
    y=[]
    for j in range(n):
        s=input().split(" ")
        x.append(int(s[0]))
        y.append(int(s[1]))
    a=max(x)-min(x)
    b=max(y)-min(y)
    res=max(a,b)
    print(res*res)