#include<stdio.h>
#include<conio.h>
int main()
{
	int a[' '],n,i;
	printf("How many no u want to store:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter a number:");
		scanf("%d",&a[i]);
	}
	printf("\nNo in list-");
	for(i=0;i<n;i++)
	printf("%4d",a[i]);
	return(0);
	
}
