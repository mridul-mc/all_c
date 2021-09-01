#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(k=(n*2);k>(2*i-1);k--)
		{
			printf("-");
		}
	/*	for(k=n;k>i;k--)
		{
			printf("  ");
		}*/
		
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}
