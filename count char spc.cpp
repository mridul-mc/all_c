#include<stdio.h>
#include<conio.h>
int main()
{
	char st[50];
	int nosp,noch,i;
	printf("Enter a sentence:");
	gets(st);
	printf("\nInput string:%st");
	i=0;
	noch=0;
	nosp=0;
	while(st[i]!='\0')
	{
		noch++;
		if(st[i]==' ')
		nosp++;
		i++;
	}
	printf("\nNo of char=%d \t no of sp=%d",noch,nosp);
	return(0);
}
