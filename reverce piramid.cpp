#include<stdio.h>
int main()
{
	int a,b;
	int n=5;
	for(a=1;a<=n;a++)
	{
		for(b=a;b<=1;b++)
		{
		
		    if(b<=n+1-a)
		    {
		      printf("%d",a);
    	    }
		
			else
			{
			printf(" ");
		    }
		}
		printf("\n");
	}
}
