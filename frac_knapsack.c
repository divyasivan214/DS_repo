#include<stdio.h>
#include<stdlib.h>
void fractionalknap(int n,int capacity,int item[],int profit[],int weight[],float ratio[])
{
	float max_prof=0.0;
	int i;
	for(i=0;i<n;i++)
	{
		if(weight[i]<=capacity)
		{
			capacity-=weight[i];
			max_prof+=profit[i];
		}
		else
		{
			break;
		}
	}
	if(i<n)
		max_prof+=(ratio[i]*capacity);
	printf("Maximum Profit : %f",max_prof);
}
void sort(float ratio[],int n,int item[],int profit[],int weight[])
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(ratio[j]<ratio[j+1])
			{
				temp=ratio[j];
				ratio[j]=ratio[j+1];
				ratio[j+1]=temp;
				
				temp=item[j];
				item[j]=item[j+1];
				item[j+1]=temp;
			
				temp=profit[j];
				profit[j]=profit[j+1];
				profit[j+1]=temp;

				temp=weight[j];
				weight[j]=weight[j+1];
				weight[j+1]=temp;
			}
		}
	}
}
main()
{
	int n,capacity,i;
	printf("Enter no. of items : ");
	scanf("%d",&n);
	printf("Enter capacity : ");
	scanf("%d",&capacity);
	int item[n],profit[n],weight[n];
	printf("Enter items : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&item[i]);
	}
	printf("Enter profits : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&profit[i]);
	}
	printf("Enter weights : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&weight[i]);
	}
	float ratio[n];
	for(i=0;i<n;i++)
	{
		ratio[i]=(float)profit[i]/weight[i];
	}
	sort(ratio,n,item,profit,weight);
	fractionalknap(n,capacity,item,profit,weight,ratio);
}
