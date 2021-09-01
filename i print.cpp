#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,k,p;
	printf("Enter the:");
	scanf("%d",&n);
	
	for(j=1;j<=2;j++)
		{
			for(i=1;i<=n;i++)
			{                     
				printf("%c",c);
			}
			printf("\n");
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("%c",c);
			}               
			for(j=0;j<1;j++)
			{
				printf(" ");
			} 
			for(j=0;j<n-5;j++)
			{
				if(i==n/2+1)
				{
				printf("%c",c);
				}
				else
				printf(" ");           
			}       
			for(j=0;j<2;j++)                                                   
			{
				if(i>n/2)
				{
					printf("%c",c);
				}
				else
				printf(" ");
			}
			printf("\n");
		}
		for(j=1;j<=2;j++)               
		{
			for(i=1;i<=n;i++)
			{                           
			printf("%c",c);
			}
			printf("\n");
		}
	return(0);
}






