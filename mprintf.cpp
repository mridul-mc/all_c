#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,l,m;
	for(i=0;i<=11;i++)
	{	
	/*1*/for(j=0;j<=2;j++)
		{
			printf("*");
		}
		
	/*2*/for(k=1;k<=i;k++)
		{
			printf(" ");
		}	
	/*3*/for(j=0;j<=2;j++)
		{
			printf("*");
		}
	/*4*/for(m=10;m>=i;m--)
		{
			printf("  ");
		}
	/*5*/for(j=0;j<=2;j++)
		{
			printf("*");
		}
	/*6*/for(k=1;k<=i;k++)
		{
			printf(" ");
		}
	/*7*/for(j=0;j<=2;j++)
		{
			printf("*");
		}
	
	printf("\n");
}
return(0);
}
