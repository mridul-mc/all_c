#include<stdio.h>
#include<conio.h>
void convert(int,int);
char hexcore(int);
int main()
{

	int n,b;
	char ch;
do{
	printf("enter a decimal no:");
	scanf("%d",&n);
	printf("\nEnter the base:");
	scanf("%d",&b);
	printf("\nNo:%d \t base:%d",n,b);
	printf("\n");
	convert(n,b);
	printf("\n");
	printf("\n");
	printf("Do you want to continue do this program.......(y/n): ");
	scanf("%c",&ch);
	ch=getchar();
	getchar();
}while(ch=='y' || ch=='Y');
	return(0);
}

void convert(int m,int c)
{
	int ans[16],i=0,j;
	while(m>0)
	{
		ans[i++]=m%c;
		m=m/c;
	}
	for(j=i-1;j>=0;j--)
		if(ans[j]>=10 && ans[j]<=15)
			printf("%c",hexcore(ans[j]));
		else
			printf("%d",ans[j]);
}
char hexcore(int p)
{
	switch(p)
	{ 
		case 10:
			return'A';
		case 11:
			return'B';
		case 12:
			return'C';
		case 13:
			return'D';
		case 14:
			return'E';
		case 15:
			return'F';
	}
	return ' ';
}   
