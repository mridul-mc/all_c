#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	char st1[50],st2[50];
	printf("Enter the name in small case:");
	gets(st1);
	printf("\nInput string is:%s",st1);
	for(i=0,j=0;st1[i]!='\0';i++,j++)
	{
		if(st1[i]>='a' && st1[i]<='z')
			st2[j]=st1[i]-32;
		else
			st2[j]=st1[i];
	}
	printf("\n");
	printf("\nIn upper case:%s",st2);
	return(0);
}



