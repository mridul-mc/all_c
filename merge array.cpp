#include<stdio.h>
#include<conio.h>
int main()
{
	int me[' '],arr[' '],ar[' '],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}

	i=0;
	while(i<n)
	{
		me[i]=arr[i];
		i++;
	}

	int j=0;
	
	while(j<n)
	{
		me[i]=ar[j];
		i++;
		j++;
	}
	
	for(i=0;i<n*2;i++)
	{
		printf("%d ",me[i]);
	}
}
