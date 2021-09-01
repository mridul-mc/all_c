#include<stdio.h>
#include<conio.h>
int sum(int);
int main()
{
	int n;
	scanf("%d",&n);
	printf("sum:%d",sum(n));
}
int sum(int n)
{
	if(n%2==0)
	{
		return(-(n/2));
	}
	else
	{
		return((n+1)/2);
	}
}
