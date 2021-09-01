#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	long int i,n,j,k;
	printf("Enter the no:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	for(k=1;k<=n;k++)
	{
		for(j=0;j<n;j++)
		{
		if(i==j || i+j==n-1)
		printf("*");
		else
		printf(" ");
		}
	}
		printf("\n");	
	}
	printf("\n");
}
