#include<stdio.h>
#include<conio.h>
int main()
{
	int array[' '],n,i,pos,item;
	printf("Enter no of iten:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter no:");
		scanf("%d",&array[i]);
	}
	printf("\nList:");
	for(i=0;i<n;i++)
	printf("%4d",array[i]);
	
	printf("\nEnter no to insert:");
	scanf("%d",&item);
	
	printf("\nmention the possition:");
	scanf("%d",&pos);
	
	for(i=n-1;i>=pos-1;i--)
	array[i+1]=array[i];
	array[pos-1]=item;
	n++;
	printf("\nList after insert:");
	for(i=0;i<n;i++)
	printf("%4d",array[i]);
	
	
return(0);
}
