#include<stdio.h>
#include<conio.h>
int  main()
{
	int  i,j,n,us,s1=0,s2=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2)
	{
		s1=s1+i;
	}
	for(j=1;j<=n;j=j+2)
	{
		s2=s2+j;
	}
	us=(s1-s2);
	printf("The us is:%d",us);
	return(0);
}
