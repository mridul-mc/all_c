#include<stdio.h>
#include<conio.h>
int  main()
{
	int i,n,sum=0;
	printf("Enter the terms:");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2)
	sum=sum+i;
	printf("total is:%d",sum);
	return(0);
}
