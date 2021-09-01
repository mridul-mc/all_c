#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,w,i,j,k,e,o,x,y,z,l,n;
	printf("Enter the line no:");
	scanf("%d",&w);

	printf("Enter the no:");
	scanf("%d",&e);

	printf("Etn:");
	scanf("%d",&n);
	
for(o=1;o<=1;o++)
{
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
/********************************************************************/

	for(a=1;a<=2;a++)
	{
		printf("**");
		printf("\n");
	}
	for(b=1;b<=1;b++)
	{
		printf("  ");
		printf("\n");
	}
	for(c=1;c<=w;c++)
	{
		printf("**");
		printf("\n");
	}
	
	/****************************************************************/
for(b=1;b<=n;b++)
	{
		for(x=1;x<=1;x++)
		{
			printf("**");
		}
		
		for(z=1;z<=n-2;z++)
		{
			printf(" ");
		}
		
		for(y=1;y<=1;y++)
		{
			printf("**");
		}
		printf("\n");	
	}
	
	for(l=0;l<=n+1;l++)
		{
			printf("*");
		}
		printf("\n");
/**********************************************************/
for(a=1;a<=2;a++)
	{
		printf("**");
		printf("\n");
	}
	for(b=1;b<=1;b++)
	{
		printf("  ");
		printf("\n");
	}
	for(c=1;c<=w;c++)
	{
		printf("**");
		printf("\n");
	}
	
}				//this is the last curli bracket




