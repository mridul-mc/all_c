#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char st[' '],sr[' '];
	int i,j;
	gets(st);
	int n=strlen(st);
	for(i=0,j=n-1;j>=0;j--,i++)
	{
		sr[i]=st[j];
	}
	puts(sr);
	return(0);
}
