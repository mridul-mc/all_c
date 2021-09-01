#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n,*arr,i,A[' '];
	printf("Enter size:");
	scanf("%d",&n);
	arr=(int*)calloc(n,sizeof(int));
	if(arr==NULL)
	{
		printf("No memory\n");
	}
	else
	{
		printf("Memory successfully allocated\n");
	}
	for(i=0;i<n;i++)
	{
		printf("Enter a no:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

