#include<stdio.h>
#include<conio.h>
void show(int a[],int);
void bsort(int a[],int);
int main()
{
	int num[20],n,i;
	printf("Enter no of char:");
	scanf("%d",&n);
	//input
	for(i=0;i<n;i++)
	{
		printf("Enter no:");
		scanf("%d",&num[i]);
	}
	printf("\nin bouble sorting:");					//show the list before shorting
	show(num,n);        					
	
	bsort(num,n);    					   	      //calling the function
	
	printf("\nin assending order:");			//show the list after short
	show(num,n);     					 
	
	return(0);
}

/******************************************************************************/
void show(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%9d",a[i]);
}
/*******************************************************************************/

void bsort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp =a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
}

