
#include<stdio.h>
#include<conio.h>
#include<process.h>
int sum(int a[][32],int b[][32],int);
int dif(int a[][32],int b[][32],int);
int pro(int a[][32],int b[][32],int);
int tra(int a[][32],int b[][32],int);
int main()
{
	char z;
	int a[' '][' '],b[' '][' '],i,j,c,n;
	do{
	printf("\nEnter row and coloumn number:");
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
	printf("[1] Sum\n[2] Difference\n[3] Product\n[4] Transpose\n[5] Exit");
	//start switch case
	printf("\nEnter your choice:");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			sum(a,b,n);
			break;
		case 2:
			dif(a,b,n);
			break;
		case 3:
			pro(a,b,n);
			break;
		case 4:
			tra(a,b,n);
			break;
        case 5:
			exit(0);
		default:
			printf("Don't match");
	}
	printf("\nContinue:");
	z=getche();
}while(z=='y'||z=='Y');  
	return(0);
}
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
int sum(int a[' '][' '],int b[' '][' '],int n)
{
	int c[' '][' '],i,j;
	for(i=0;i<n;i++)
	{
	 	for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\n");
	printf("sumation of matrix is:\n");
	for(i=0;i<n;i++)
	{
	 	for(j=0;j<n;j++)
		{
			printf("%3d",c[i][j]);
		}
		printf("\n");
	}
}
int dif(int a[' '][' '],int b[' '][' '],int n)
{
	int c[' '][' '],i,j;
	for(i=0;i<n;i++)
	{
	 	for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
		}
	}
	printf("\n");
	printf("Difference of matrix is:\n");
	for(i=0;i<n;i++)
	{
	 	for(j=0;j<n;j++)
		{
			printf("%3d",c[i][j]);
		}
		printf("\n");
	}
}
int pro(int a[' '][' '],int b[' '][' '],int n)
{
	int i,j,s=0,k,c[' '][' '];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				s=s+a[i][k]*b[k][j];
  			}
  			c[i][j]=s;
  			s=0;
		}
	}
	//print
	printf("production of matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%3d",c[i][j]);
		}
		printf("\n");
	}
}  
