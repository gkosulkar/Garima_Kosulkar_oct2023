#include<stdio.h>
int main()
{
	int i,c=0;
	char s1[5]={"anjali"};
	char s2[5];
	for(i=0;s1[i]!='\0';i++)
	{
		if (s1[i]=='a'||s2[i]=='A')
		{
			c=c+1;

		}
	}
	printf("%d",c);
}
