#include<stdio.h>
int main()
{
	int n;
	printf("enter the number ");
	scanf("%d",&n);
	if(n>0 & n<20)
	{
		printf("n is between range of 0 to 20");
			}
	else if(n>20 & n<40)
	{
		printf("n is between range of 21 to 40");
	}
	else if (n>40 & n<60)
	{
		printf(" n is between range of 41 to 60");
	}
	else if(n>60 & n<80)
	{
		printf(" n is between range of 60 to 80");
	}
	else if (n>80 || kn<0)
	{
		printf("error");
	}
}

