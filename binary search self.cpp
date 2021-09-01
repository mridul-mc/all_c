#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void show(int a[],int);
void sort(int a[],int);
int bsearch(int a[],int,int);

int main()
{
	int a[20],n,i,item,pos;
	char ch;

	printf("Enter the no:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter a no:");
		scanf("%d",&a[i]);
	}
	
	sort(a,n);
	printf("\nThe list is after sort:");
	show(a,n);
	

do{
	printf("\nEnter the no that u want to see:");
	scanf("%d",&item);
	pos=bsearch(a,n,item);
	if(pos!=-1)
	printf("%d is fount at position %d",item,pos+1);
	else
	printf("%d not found",item);
	

	printf("\nDo you want to continue this program?(y/n)");
	scanf("%c",&ch);
	ch=getchar();
	getchar();	
  }while(ch=='y' || ch=='Y');
  
	//	return(0);
		
}
//////////////////////////////////////////*/
void show(int a[],int n)
{
int i;
for(i=0;i<n;i++)
{
	printf("%5d",a[i]);
}

}
//////////////////////////////////////////*/
void sort(int a[],int n)
{
	int i,j,swap;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		if(a[j]>a[j+1])
		{
			swap=a[j];
			a[j]=a[j+1];
			a[j+1]=swap;
		}
	}
}
//////////////////////////////////////////*/
int bsearch(int a[],int n,int item)
{
	int low=0,high=n-1,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(item==a[mid])
			return mid;
		else if(item<a[mid])
			high=mid-1;
		else
			low=mid+1;
	}
	return -1;
}
