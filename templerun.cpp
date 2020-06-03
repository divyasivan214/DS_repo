#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>m;
    for(i=1;i<=m;i++)
    {
        int sum=0,num;
        cin>>num;
        int s=-1;
        for(int j=0;j<n;j++)
        {
            sum+=a[j];
            if(sum>=num)
            {
                s=j+1;
                break;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}