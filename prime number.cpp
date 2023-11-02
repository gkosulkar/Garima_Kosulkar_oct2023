#include<stdio.h>
int main()
{
	int num,cout;
    	printf("enter a number");
	   scanf("%d",&num);
	for(cout=2;cout<=num;cout++)
   	{
		  if(num%cout==0)
		{
			printf("no is not prime");
			break;
		}
	}
	if(num==cout)
	{
		printf("no is prime");
	}
	
	
}
