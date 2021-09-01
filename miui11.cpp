#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,j,k;
	printf("Enter the no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=1;j++)
		printf("**");
		printf("\t");
		printf("\b\b\b\b");
		for(k=1;k<=1;k++)
		printf("**");
		printf("\n");
	}
}
