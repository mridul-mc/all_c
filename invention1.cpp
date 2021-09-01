#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,r,c,a[' '][' '];
	printf("Enter the row no:");
	scanf("%d",&r);
	printf("\nEnter the coloum no:");
	scanf("%d",&c);
	
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
		printf("\n");
	}
	
	
}
