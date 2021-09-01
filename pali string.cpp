#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char st[' '],str[' '];
	int l,i,j,co=0;
	printf("Enter a string:\n");
	gets(st);
	l=strlen(st);
	for(j=l-1,i=0;i<l;i++,j--)
	{
		str[i]=st[j];
	}
	for(i=0;i<l;i++)
	{
		if(st[i]==str[i])
		{
			co++;
		}
		else
		{
			break;
		}
	}
	if(l==co)
	{
		printf("String is palidrome");
	}
	else
	{
		printf("Not palindrome");
	}
}
