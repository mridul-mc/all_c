#include<stdio.h>
#include<conio.h>
void show(int a[], int);
void bsort(int a[], int);
int main()
{
	int a[20],i,n;
	printf("Enter no:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter a no:");
		scanf("%d",&a[i]);
	}
	printf("\nBefore sorting:");
	show(a,n);
	
	bsort(a,n);
	
	printf("\nAfter sorting:");
	show(a,n);
	return(0);
}

/********************************************************************/
void show(int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("\n%d",a[i]);
}

/********************************************************************/
void bsort(int a[], int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

