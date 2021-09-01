#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a[3][3],b[3][3],c[3][3],i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter a value:");
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter a value:");
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",b[i][j]);
		}
		printf("\n");
	}
	///////////////////////////////////////////////////////////////////
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",c[i][j]);
		}
		printf("\n");
	}
	return(0);
}
