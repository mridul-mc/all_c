#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char *a1[]={"one","two","three","four","five","six","seven","eight","nine","ten",
				"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen",
				"eighteen","nineteen"};
	char *a2[]={"twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
	
	int amt;
	printf("Enter a no:");
	scanf("%d",&amt);
	
	if(amt>999 || amt<0)
	{
		printf("\nInvalid entry");
		getch();
		exit(1);
	}
	if(amt>99)
	{
		printf("\n%s hundred",a1[amt/100-1]);
 		amt%=100;
	}
	if(amt>19)
	{
		printf(" %s",a2[amt/10-2]);
		amt%=10;
	}
	if(amt)
	printf(" %s",a1[amt-1]);
}
