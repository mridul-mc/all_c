#include<stdio.h>
#include<conio.h>
int main()
{
	int len,i,j,rem;
	printf("Enter the length:");
	scanf("%d",&len);
	for(i=1;i<=len;i++)
	{
		for(j=1;j<=i;j++)
		{
			rem=j%2;
			{
				printf("%d",rem);
			}
		}
		printf("\n");
	}
}
