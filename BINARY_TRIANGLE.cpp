#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(((i+j)%2)==0)
			printf("0 ");
			else
			printf("1 ");
		}
		printf("\n");
	}
}
