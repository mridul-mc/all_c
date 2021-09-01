#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	long int i,n,j;
	printf("Enter the no:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=n;j>i;j--)
		{
			printf(" ");
		}
	printf("*");	
	printf("\n");
	}
	
	
	for(i=0;i<n*3;i++)
	{
		printf("*");
	}
	
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
	printf("*");
	printf("\n");
	}
}
