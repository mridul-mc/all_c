#include<stdio.h>
#include<conio.h>
int fir(int);
int sec(int);
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=1;i++)
	{
		fir(n);
		sec(n);
	}
	return(0);
}
int fir(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=n;j>i;j--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n*2;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		
		for(j=n;j>=i;j--)
		{
			printf("*");
		}
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(j=n;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}
int sec(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(j=1;j<=(2*n-2*i);j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
	printf("\n");
}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n*2;j++)
		{
			printf("*");
		}
	printf("\n");
}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=(2*n-2*i);j++)
		{
			printf("*");
		}
	printf("\n");
}

	
}
