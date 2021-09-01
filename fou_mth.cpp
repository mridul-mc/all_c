#include<stdio.h>
#include<conio.h>
int man()
{
	int i,j,k;
	for(i=1;i<=15;i=i+2)
	{
		for(j=1;j<=15;j=j+2)
		{
			for(k=1;k<=15;k=k+2)
			{
				if(15==i+j+k)
				{
					printf("%d %d %d",i,j,k);
				}
				else
				{
					printf("Not found");
				}
			}
		}
	}
	return(0);
}
