#include<stdio.h>
int main()
{
	char name1[10],name2[10],name3[20];
	int i,j;
	printf("enter first name\n");
	scanf("%s",name1);
	printf("enter second name\n");
	scanf("%s",name2);
	for (i=0;name1[i]!='\0';i++)
	
	    {
		name3[j]=name1[i];     
		j++;
     	}
			for(i=0;name2[i]!='\0';i++)
			 {
		     name3[j]=name2[i];
			j++;
		     }
		printf("conctiant %s",name3);
}
