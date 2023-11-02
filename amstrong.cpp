#include<stdio.h>
int main()
{
	int num,d1,d2,d3,cube,org;
	printf("enter 3 digit number");
	scanf("%d",&num);
	org=cube;
	d1=num%10;
	num=num/10;
	d2=num%10;
	num=num/10;
	d3=num%10;
	num=(d1*d1*d1+d2*d2*d2+d3*d3*d3);
	if(org==cube)
	{
	printf("number is armstrong");
    }
else
     {
	printf("not armstrong");
     }
    printf("%d",cube);

}
