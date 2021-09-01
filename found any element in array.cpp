#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a[5]={5,8,3,4,7},n,i,flag=0;
	printf("Enter the no:");
	scanf("%d",&n);
	for(i=0;i<=4;i++)
	{
		if(n==a[i])
		{
			printf("position is:%d",i+1
			);
			flag=1;
		}
	}
	if(flag==1)
	printf("\nelement found");
	else
	printf("not found");
	return(0);
}
