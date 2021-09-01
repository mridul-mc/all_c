#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	float a[' '],max,min;
	printf("\nEnter the length:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the number:");
		scanf("%f",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
		if(min>a[i])
		min=a[i];
	}
	printf("\nNo in list:");
	for(i=0;i<n;i++)
	printf("%.2f ",a[i]);
	printf("\nMax=%.2f \t min=%.2f",max,min);
	return(0);
}
