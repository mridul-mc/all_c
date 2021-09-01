#include<stdio.h>
#include<conio.h>
int  main()
{
	int i,n,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i=n*10+n)
	sum=sum+i;
    printf("total:%d",sum);
	return(0);
}
