#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,rem,sum=0,num;
	printf("Enter a no:");
	scanf("%d",&n);
	num=n;
	while(num>0)
	{
		rem=num%10;
		sum=sum+pow(rem,3);
		num=num/10;
	}
	if(n==sum)
	printf("The no is armstorn");
	else
	printf("the number is not armstorn");
	return(0);
}
