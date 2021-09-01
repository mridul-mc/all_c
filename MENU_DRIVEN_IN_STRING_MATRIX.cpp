#include<stdio.h>
#include<conio.h>
//int sum(int a[][32],int b[][32],int);
//int dif(int a[][32],int b[][32],int);
//int pro(int a[][32],int b[][32],int);
int tra(int a[][32],int b[][32],int);
int main()
{
	int a[' '][' '],b[' '][' '],i,j,c,n;
	
	printf("Enter row and coloum number:");
	scanf("%d",&n);
	
	//input matrix
	printf("Enter the first matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n");
	
	//input matrix
	printf("Enter the second matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	//output of matrix
	printf("The first matrix is:-\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	printf("The second matrix is:-\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%3d",b[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	//start switch case
	
	printf("Enter your choice:");
	scanf("%d",&c);
	
	switch(c)
	{
	/*	case 1:
			sum(a);
		case 2:
			dif(a);
		case 3:
			pro(a,b);*/
		case 4:
			tra(a,b,n);
	}
	return(0);
}
//    start transform 
int tra(int a[' '][' '],int b[' '][' '],int n)
{
	int i,j;
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			printf("%3d",b[i][j]);
		}
		printf("\n");
	}
}
/*// strt product
int pro(int a[3][3],int b[3][3])
{
	int i,j,k,sum,res[3][3];
//start product
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			for(k=1;k<=3;k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			res[i][j]=sum;
			sum=0;
		}
	}
	//show
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("%3d",res[i][j]);
		}
		printf("\n");
	}
}*/

