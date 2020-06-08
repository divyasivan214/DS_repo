str1=input("Enter the string\n")
n=len(str1)
ans=""
arr = [[0 for j in range(n+1)] for i in range(n+1)] 
for i in range(1,n+1):
    for j in range(1,n+1):
        if str1[i-1]==str1[j-1] and i!=j:
            ans+=str1[i-1]
            arr[i][j]=1+arr[i-1][j-1]
        else:
            arr[i][j]=max(arr[i-1][j],arr[i][j-1])
i=n
j=n
res=""
while(i>0 and j>0):
    if arr[i][j]==arr[i-1][j-1]+1:
        res+=str1[i-1]
        i-=1
        j-=1
    elif arr[i][j]==arr[i-1][j]:
        i-=1
    elif arr[i][j]==arr[i][j-1]:
        j-=1
res="".join(reversed(res))
print(res)