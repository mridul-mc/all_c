#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i,le,j;
	char str[20],str1[10];
	printf("Enter first string:");
	gets(str);
	printf("Enter second string:");
	gets(str1);
	le=strlen(str);
	for(i=le,j=0;i<10;i++,j++)
	{
		str[i]=str1[j];
	}
	puts(str);
}
