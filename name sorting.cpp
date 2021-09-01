#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()

{
	char name[10][20],temp[20];
	int i,j,n;
	
	printf("Enter no of names to insert:");
	scanf("%d",&n);
	
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("Enter the name:");
		fflush(stdin);
		gets(name[i]);
	}
	
	printf("\nName Element:");
		for(i=0;i<n;i++)
		printf("%s",name[i]);
		
		
	for(i=0;i<n;i++)
	for(j=0;j<n-i-1;j++)
			{
			if(strcmp(name[j],name[i+1])>0)
				{
					strcpy(temp,name[j]);
					strcpy(name[j],name[i+1]);
					strcpy(name[i+1],temp);
				}
			}
			
	printf("\nList in sorted order:");
		for(i=0;i<n;i++)
			printf("\t%s",name[i]);
	return(0);
}
