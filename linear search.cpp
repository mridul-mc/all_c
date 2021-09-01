#include<stdio.h>
#include<conio.h>
#include<process.h>
int main()
{
	int n,i,a[5]={5,6,8,7,4},flag=0;
	printf("Enter your search no:");
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		if(n==a[i])
		{
			printf("found possition:%d",i+1);
			exit(0);
		}
	}
	if(flag==1)
		printf("\nfound");
	else
		printf("not found");
	return(0);
}
