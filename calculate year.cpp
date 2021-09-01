#include<stdio.h>
#include<conio.h>
int main()
{
	int year,date,sum,yd;
	printf("Enter year no[last two digit]:");
	scanf("%d",&year);
	
	printf("Enter date:");
	scanf("%d",&date);
	
	yd=year/4;
	
	sum=(year+date+yd)%7;
	
	
	/*if
	(sum==0)
 	printf("\nSUNDAY");
 	
	else if
	(sum==1)
	printf("\nMONDAY");
	
	else if
	(sum==2)
	printf("\nTUESDAY");
	
	else if
	(sum==3)
	printf("\nWEDNESDAY");
	
	else if
	(sum==4)
	printf("\nTHURSDAY");
	
	else if
	(sum==5)
	printf("\nFRIDAY");
	
	else if
	(sum==6)
	printf("\nSATURDAY");*/

	
	return(0);
}
