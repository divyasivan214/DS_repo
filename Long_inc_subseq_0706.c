#include<stdio.h>
int main()
{
	int n;
    printf("Enter Total No.of elements:");
	scanf("%d",&n);
	int i,a[n],j,res[n];
    printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	res[0]=1;
	for(i=1;i<n;i++)
	{
		res[i]=1;
		for(j=0;j<i;j++)
		{
			if(a[i]>a[j] && res[i]<res[j]+1)
				res[i]=res[j]+1;
		}
	}
	int max=-9999;
	for(i=0;i<n;i++)
	{
		if(res[i]>max)
			max=res[i];
	}
	printf("%d",max);
}