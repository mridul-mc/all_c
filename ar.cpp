#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,a[1]={2};
	for(i=0;i<2;i++)
	{
		printf("%d\n",a[i]);
	}
	for(i=0;i<1;i++)
	{
		/*for(j=i+1;j<1;j++)
		{
			
		}*/
		a[i]=a[i+2];
	}
	for(i=0;i<2;i++)
	{
		printf("%d\n",a[i]);
	}
}
