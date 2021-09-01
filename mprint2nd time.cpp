#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,e;
	printf("Enter the no:");
	scanf("%d",&e);
	for(i=0;i<=e;i++)     //line no
	{
		for(j=0;j<=1;j++)  //left coloum
		{
			printf("*");
		}
		
		for(k=1;k<=i;k++)  //1st coloum middle space
		{
			printf(" ");
		}
		
		for(j=0;j<=1;j++)  //left coloum 2nd star print
		{
			printf("*");
		}
		
		for(k=e-1;k>=i;k--)  //middle space print
		{
			printf("  ");
		}
		
		for(j=0;j<=1;j++)  //right coloum 2nd star print
		{
			printf("*");
		}
		
			for(k=1;k<=i;k++)  //last coloum middle space
		{
			printf(" ");
		}
		
		for(j=0;j<=1;j++)  //right coloum
		{
			printf("*");
		}	
		printf("\n");
	}
}
