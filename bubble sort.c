#include<stdio.h>
int main()
{
	int n=5;
	int a[5]={44,33,11,22,55},temp,i,j;
		for (i=1;i<=n-1;i++)
		{
			for (j=1;j<=n-i-1;j++)
			{
				if (a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		printf("array after implementing bubble sort \n");
		for (i=0;i<n;i++)
	{
	printf("%d",a[i]);
    }
}
