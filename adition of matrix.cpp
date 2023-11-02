#include<stdio.h>
int main()
{
	int m1[2][2],i,j,m2[2][2];
	printf("enter the matrix\n", m1[2][2]);
	     for (i=0;i<=2;i++)
	    {
	    	for(j=0;j<=2;j++)
		   {
		   	scanf("%d",&m1[i][j]);
		    }
	    	printf("\n");
	    }
		
		for(i=0;i<=2;i++)
			{
				for(j=0;j<=1;j++)
		    	    
					{
					m2[j][i]==m1[i][j];
		    
				printf("%d",m2[i][j]);
			       }
				printf("\n");
			}
			
		}
	

