#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
int main()
{
	int n1,n2,*p;
	printf("Enter 1st number:");
	scanf("%d",&n1);
	printf("Enter 2nd number:");
	scanf("%d",&n2);
	printf("Before swap:-\nN1=%d  N2=%d",n1,n2);
	swap(&n1,&n2);
	printf("\nAfter swap:-\nN1=%d  N2=%d",n1,n2);
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
