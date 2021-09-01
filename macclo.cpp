#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n,*arr,i;
	printf("Enter array length:");
	scanf("%d",&n);
	arr=(int*)calloc(n,sizeof(int));
	if(arr==NULL)
	{
		printf("Memory can't create'");
	}
	else
	{
		printf("Array element's are:\n");
		for(i=0;i<n;i++)
		{
			printf("%d  ",(arr+i));
		}
	}
}

