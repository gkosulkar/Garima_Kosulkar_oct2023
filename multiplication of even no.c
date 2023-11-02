#include<stdio.h>
int main()
{
	int multi,num;
	for (int i=1;i<=20;i++)
	{
	if(i%2==0)
	{
		printf("%dis even\n",i);
		multi=i*i;
		printf("square of %d no is %d \n\n",i,multi);
	}
	printf("\n");
}
}
