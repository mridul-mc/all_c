#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
int sum(int a[][32],int b[][32],int);
int dif(int a[][32],int b[][32],int);
//int pro(int a[][32],int b[][32],int);
int tra(int a[][32],int b[][32],int);
int main()
{
	int a[' '][' '],b[' '][' '],i,j,c,n;
	
	printf("Enter row and coloumn number:");
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
		case 1:
			sum(a,b,n);
			break;
		case 2:
			dif(a,b,n);
			break;
	/*	case 3:
			pro(a,b);*/
			break;
		case 4:
			tra(a,b,n);
			break;
        case 5:
			exit(0);
	}
	return(0);
}
//start transform 
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
//start sum
int sum(int a[' '][' '],int b[' '][' '],int n)
{
	int c[' '][' '],i,j;
	//start sum
	for(i=0;i<n;i++)
	{
	 	for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
		printf("\n");
	//output
	for(i=0;i<n;i++)
	{
	 	for(j=0;j<n;j++)
		{
			printf("%3d",c[i][j]);
		}
		printf("\n");
	}
}
//start product
int dif(int a[' '][' '],int b[' '][' '],int n)
{
	int c[' '][' '],i,j;
	//start sum
	for(i=0;i<n;i++)
	{
	 	for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
		}
	}
		printf("\n");
	//output
	for(i=0;i<n;i++)
	{
	 	for(j=0;j<n;j++)
		{
			printf("%3d",c[i][j]);
		}
		printf("\n");
	}
}
