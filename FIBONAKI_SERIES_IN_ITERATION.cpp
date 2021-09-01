#include<stdio.h>
#include<conio.h>
int main()
{
	int n1=0,n2=1,n3,n,i;
	printf("Enter the length:");
	scanf("%d",&n);
	printf("%d %d",n1,n2);
	for(i=3;i<=n;i++)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf(" %d",n3);
	}
}  
