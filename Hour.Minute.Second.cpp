#include<stdio.h>
#include<conio.h>
void convert(int);
int main()
{
	int s;
	printf("Enter the time in second:");
	scanf("%d",&s);
	convert(s);
	return(0);
}
void convert(int s)
{
	int h,m;
	h=s/3600;
	m=((s%3600)/60);
	s=((s%3600)/60);
	printf("\nTime(hh:mm:ss):%d:%d:%d",h,m,s);
}
