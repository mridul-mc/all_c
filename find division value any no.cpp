#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	long int n,r,s=0,i;
	printf("Enter the no:");
	scanf("%d",&n);
	
	for(i=2;i<n;i++)
	{
		r=n%i;
		if(r==0)
		printf("This number division by:%d\n",i);
	}
}
