#include<stdio.h>
#include<conio.h>
int main()
{
	int i,s=1,r;
	printf("Enter the number:");
	scanf("%d",&i);
	while(i>0)
	{
	r=i%10;
	s=10*r+s;
	i=i/10;
	}
	printf("\n%d",s);
}
