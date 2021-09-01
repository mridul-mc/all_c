#include<stdio.h>
#include<conio.h>
int self_function();
int num=10;
int main()
{
	int a=5,b=10,c,sul;
	printf("%d",a+b+c+num+self_function());
}

int self_function()
{
	int x=5;
	return x;
}
