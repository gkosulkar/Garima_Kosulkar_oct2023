#include<stdio.h>
int main()
{
	int a[4],temp,i;
	printf("enter 5 number");
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	temp=a[1];
	for (i=1;i<=4;i++)
	{
		if (a[i]>temp)
		{
			temp=a[i];
		}
		
		
	}
	printf(" smallest value %d",temp);
	
}
