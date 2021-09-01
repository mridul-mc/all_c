#include<stdio.h>
#include<conio.h>
int main()
{
	int a[' '],i,n,item,pos;        //variable declare
	printf("Enter how many no u want:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the no:");       //insert value in aray
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	printf("No in list:%d\n",a[i]);     //show list of the array
	
	printf("\nEnter no insert:");       //no you insert
	scanf("%d",&item);
	
	
	printf("\nEnter the pos u insert:");   //enter the position
	scanf("%d",&pos);
	for(i=n-1;i>=pos-1;i--)
	a[i+1]=a[i];
	a[pos-1]=item;
	n++;
	printf("\nlist after insert:");      //list after insert
	for(i=0;i<n;i++)
	printf("%4d",a[i]);
	return(0);
}
