#include<stdio.h>
#include<conio.h>
int pri(int n);
int main()
{
	int n;
	printf("enter the no:");
	scanf("%d",&n);
	pri(n);
	return(0);
}
int pri(int n)
{
	int i,j,rem;
		for(j=2;j<=n;j++)			
	{
		for(i=2;i<j;i++)				
		{
		rem=j%i;
		if(rem==0)
			{
				break;			
			}
 		}
		if(j==i)                    
		{
		printf("%d\t",j);
		}	
	}
}
