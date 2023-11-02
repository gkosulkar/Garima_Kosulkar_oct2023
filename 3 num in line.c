#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter numbers ");
	scanf("%d %d %d ",&i,&j,&k);
	printf("enter value of n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("squar=%d,cube=%d",i*i,i*i*i);
	}
}
