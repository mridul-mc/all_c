#include<stdio.h>
#include<conio.h>
int getmax(int,int,int
);
int main()
{
	int a,b,c;
	int max;
	printf("Enter three no:");
	scanf("%d%d%d",&a,&b,&c);
	max=getmax(a,b,c);
	printf("\nMax number is %d",max);
	//printf("\n%d is less than %d",b,a);
	return(0);
}

int getmax(int x,int y,int z)
{
	if(x>y && x>z)
	return x;
	else if(y>z)
	return y;
	else 
	return z;
	
}
