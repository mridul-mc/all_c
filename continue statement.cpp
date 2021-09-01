#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	printf("Enter a no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i==5)
		{
			continue;
		}
		else
		{
			printf("%d\n",i);
		}
	}
}
