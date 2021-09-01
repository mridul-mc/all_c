#include<stdio.h>
#include<conio.h>
int main()
{
	int a,j,i,s;
	printf("enter any no:");
	scanf("%d",&a);
	for(s=a-1,i=1;i<=a;i++,s--)
	{
		for(j=1;j<=s;j++)
		cout<<'';
		for(j=1;j<i;j++)
		printf("*");
		printf("\n");
	}
	return(0);
}
