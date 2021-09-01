#include<stdio.h>
#include<conio.h>
int main()
{
	int a[' '],i,j=1,n;
	printf("Enter number:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		a[i]=j;
		j++;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}













