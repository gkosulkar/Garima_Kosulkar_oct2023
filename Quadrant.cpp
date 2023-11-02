#include<stdio.h>
int main()
{
	int i ,j;
	printf("enter two number");
	scanf("%d %d",&i,&j)
	if (i>0&j>0)
	   {
		printf("Quadrant 1");
    	}
	else if(i>0&j<0)
	{
		printf("Quadrant 2");
	}
	else if(i<0&j>0)
	{
		printf("Quadrant 3");
		
	}
	else if(i<0&j<0)
	{
		printf("Quadrant 4");
	}
}
