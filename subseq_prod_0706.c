#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int Max_pro(int n,int a[],int k)
{
	int i,j,count=0,p=pow(2,n);
	for(i=0;i<p;i++)
	{
		int c=1;
		for(j=0;j<n;j++)
		{
			if((i & (1<<j))>0)
				c*=a[j];
				
		}
		if(c<k)
			count++;
	}
	return count-1;
	
}

int main()
{
	int k,n;
	printf("Enter Total no. of elements : ");
	scanf("%d",&n);
	int i,a[n];
	printf("Enter elements :\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter k value  : ");
	scanf("%d",&k);
	printf("%d",Max_pro(n,a,k));
}