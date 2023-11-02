#include<stdio.h>
int main()
{
	int i, sum=0;
	for (i=10;i<=30;i++)
	{
		
	if (i%17!=0)
	{
		printf(" %d not divisible by 17 \n",i);
		sum=sum+i;
	}
	 
}
printf(" sum is %d\n",sum);

 }
