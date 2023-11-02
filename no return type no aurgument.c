#include<stdio.h>
void sum( )
    	{
    	int n1,n2,add;
	    printf("enter 2 number");
	    scanf("%d %d",&n1 ,&n2);
     	add=n1+n2;
	     printf("%d",add);
	  }
	  void function2()
 {
 	int n1,n2,sub;
 	printf("enter 2 number");
 	scanf("%d %d",&n1,&n2);
 	sub=n1-n2;
 	printf("%d",sub);
 	
 }
 void fun3()
{
	int n1,n2,multi;
	printf("enter 2 number");
	scanf("%d %d",&n1,&n2);
	multi=n1*n2;
	printf("%d",multi);
}
void fun4()
{
	int n1,n2,division;
	printf("enter 2 number");
	scanf("%d %d",&n1,&n2);
	division=n1/n2;
	printf("%d",division);
}

main()
{
	int c,choice;
	printf("press 1 for sum\n"
	        "press 2 for sub\n"
	        "press 3 for multi\n"
	        " press 4 for divi\n");
	        printf("enter your choice");
	        scanf("%d",&choice);
	        if (choice==1)
	        {
	        	sum();
			}
			else if (c==2)
			{
				function2();
			}
			else if (c==3)
			{
				fun3();
			}
			else if (c==4)
			{
				fun4();
			}
			else 
			{
				
			}
	
}
