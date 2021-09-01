#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,num,k=1;
	printf("Enter the length:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%3d",k++);
		}
	printf("\n");
	}
}
