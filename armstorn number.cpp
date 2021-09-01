#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,num,d,sum,i,cou=0,len;
	printf("Enter the length:");
	scanf("%d",&len);
	printf("Armstorn number between 1 <--> %d\n",len);
	for(n=1;n<=len;n++)
	{
		cou=0;
		int i=n;
		while(i>0)
		{
			cou++;
			i=i/10;
		}
	num=n;
	sum=0;
	while(num>0)
	{
		d=num%10;
		sum=sum+pow(d,cou);
		num=num/10;
	}
	if(n==sum)
	printf("%d ",n);
	}
return(0);
}
