 
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,a[' '];
	                                                
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	
	switch(a[i])
	{
		case 1:
			printf("One");
			printf("\t");
			break;
		case 2:
			printf("TWo");
			printf("\t");
			break;
		case 3:
			printf("Three");
			printf("\t");
			break;
		case 4:
			printf("Four");
			printf("\t");
			break;
		case 5:
			printf("Five");
			printf("\t");
			break;
		case 6:
			printf("six");
			printf("\t");
			break;
		case 7:
			printf("seven");
			printf("\t");
			break;
		case 8:
			printf("Eight");
			printf("\t");
			break;
		case 9:
			printf("Nine");
			printf("\t");
			
		case 10:
			printf("Ten");
			printf("\t");	
			break;
		case 0:
			printf("zero");
			printf("\t");
			break;
	}
}


