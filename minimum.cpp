#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,min,arr[10];
	for(i=0;i<10;i++)
	{
		printf("Enter a no:")
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	for(i=0;i<10;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	printf("Min:%d",min);
}
