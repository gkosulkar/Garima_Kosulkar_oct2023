#include<stdio.h>
int main()
{
	int m1[1][2],i,j;
	printf("enter the 2*2 matrix");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("m1[%d][%d]",i,j);
			scanf("%d",&m1[i][j]);
		}
		printf("\n");
	}
	printf("your 2*2 matrix");
	for(i=0;i<1;i++)
	{
		for (j=0;j<=1;j++)
		{
			printf("m1[%d][%d],%d",i,j,m1[i][j]);
		}
			printf("\n");
	}

}
