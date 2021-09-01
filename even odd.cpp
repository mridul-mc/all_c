#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[5],i;
	for(i=0;i<5;i++)
	{
		printf("Enter a no:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		if((arr[i]%2)==0)
		{
			printf("the no is Even\n");
		}
		else
		{
			printf("the no is odd\n");
		}
	}
}
