#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],i,n,sum;
	printf("\nEnter how many nos you need(Max-20)");
	scanf("%d",&n);
	sum=0;
	for(i=0;i<n;i++)
	{
		printf("\nEnter a number:");
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	float avg=(float)sum/n;
	printf("\nNos in list:");
	for(i=0;i<n;i++)
	printf("%4d",a[i]);
    printf("\nSum=%d \t avg=%.2f",sum,avg);
	return(0);
	
} 
