#include<stdio.h>
int main()
{
	int a[5]={1,-2,3,4,5},count=0, aveg,sum;
	for( int i=0;i<=5;i++)
	{
		
	if (a[i]>0)
	       {
		       printf("%d number  positive",a[i]);
		       count ++;
		       sum=sum+i;
		       aveg=sum%count;
		       
	       }
	       printf("\n");.2.
    }
   printf(" aveg of  positive no is %d ",count);
   printf("\n");
   
   
}
