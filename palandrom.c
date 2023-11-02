#include<stdio.h>
int main()
{
	int num,d1,d2,d3,rev,org;
	printf("enter 3 digite number\n");
	scanf("%d",&num);
	org=num;
	d1=num%10;
	num=num/10;
	d2=num%10;
	num=num/10;
	d3=num%10;
	
	rev=d1*100+d2*10+d3;

    
	
	if (org==rev)
	{
		printf("number is palandrom");
		}
		else 
		{
			printf("not palandrom");
		}
		
}
