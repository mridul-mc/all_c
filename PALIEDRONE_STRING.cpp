#include<stdio.h>
#include<conio.h>
#include<string.h>
void pal(char a[]);
int main()
{
	char st[100],sr[100],rem;
	printf("Enter a sentens:");
	gets(st);
	pal(st);//function call
	return(0);
}  
void pal(char st[' '])
{
	int i,j,mid,num;
	char sr[' '],rem;
	strcpy(sr,st);
	num=strlen(st);
	mid=num/2;
	for(i=0,j=num-1;j>=mid;j--,i++)
	{
		rem=st[i];
		st[i]=st[j];
		st[j]=rem;
	}
	if(strcmp(sr,st)=='\0')	
		printf("yes");
	else
		printf("no");
}
