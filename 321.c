#include<stdio.h>
int main()
{
	int a,b;
	
	
		for(a=1;a<=5;a++)
		{
			for(b=1;b<=6-a;b++)
			{
				printf("%c",'A'-1+b);
			}
			printf("\n");
		}
		
}
