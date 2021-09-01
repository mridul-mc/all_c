#include<stdio.h>
#include<conio.h>
#include<process.h>
int max(int a[],int);
int min(int a[],int);
int reverse(int a[],int);
int remove(int a[],int);
int main()
{
	int array[' '],i,num,c;
	char z;
	do{
	printf("How many number do you want to store:");
	scanf("%d",& num);
	for(i=0;i<num;i++)
	{
		printf("Enter a no:");
		scanf("%d",&array[i]);
	}
	printf("[1] Find the maximum number in array\n[2] Find the minimum number in array\n[3] Reverse the array\n[4] Remove dublicate from array\n[5] Exit\nEnter your choise:");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			max(array,num);
			break;
		case 2:
			min(array,num);
			break;
		case 3:
			reverse(array,num);
			break;
		case 4:
			remove(array,num);
			break;
		case 5:
			exit(0);
			break;
		default:
			printf("Don't match");
	}
	printf("\nDo you want to continue this program(y/n):");
	z=getche();
	printf("\n");
	printf("\n");
	}while(z=='y' || z=='Y');
	return(0);
}
int max(int a[],int num)
{
	int i,max;
	for(i=1;i<num;i++)
	{
		max=a[0];
		if(a[0]<a[i])
		{
	  		max=a[i];
		}
	}
	printf("\nMax no:%d",max);
}
int min(int a[],int num)
{
	int min,i;
	for(i=1;i<num;i++)
	{
		min=a[0];
		if(a[0]>a[i])
		{
			min=a[i];
		}
	}
	printf("\nMin no:%d",min);
}
int reverse(int a[],int num)
{
	int r,i,j,h;
	r=num/2;
	for(i=0,j=num-1;i<r;i++,j--)
	{
		h=a[j];
		a[j]=a[i];
		a[i]=h;
	}
		for(i=0;i<num;i++)
	{
		printf("\n%d",a[i]);
	}
}
int remove(int a[],int num)
{
	int i,j,k;
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;)
			{				
				if(a[i]==a[j])
					{
						for(k=j;k<num;k++)
						a[k]=a[k+1];
						num--;
					}
				else
					j++;
			}
	}
printf("\n");
for(i=0;i<num;i++)
{
	printf("\n%d",a[i]);
}
}
