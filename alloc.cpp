#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n,*arr;
	printf("Enter size:");
	scanf("%d",&n);
	arr=(int*)calloc(n,sizeof(int));
	if(arr==NULL)
	{
		printf("No memory\n");
	}
	else
	{
		printf("Array element are\n");
		for(int i=0;i<n;i++)
		{
			printf("%d",*(arr+i));
		}
	}
}

