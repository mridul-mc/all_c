#include<stdio.h>
#include<conio.h>
void convert(int,int);
char decode(int);
int main()
{
	int n,b;
	printf("Enter the numbr:");
	scanf("%d",&n);
	printf("\nEnter the base:");
	scanf("%d",&b);
	printf("\nthe no is:%d\tthe base is:%d",n,b);
	printf("\n");
	convert(n,b);
	return(0);
}
void convert(int m,int c)
{
	int a[16],i,j;
	i=0;
	while(m>0)
	{
		a[i++]=m%c;
		m=m/c;		
	}
	for(j=i-1;j>=0;j--)
	
	if(a[j]>=10 && a[j]<=15)
		printf("%c",decode(a[j]));
	
	else
		printf("%d",a[j]);
}
char decode(int p)
{
	switch(p)
	{
		case 10:
			return 'A';
		case 11:
			return 'B';
		case 12:
			return 'C';
		case 13:
			return 'D';
		case 14:
			return 'E';
		case 15:
			return 'F';
	}
	return ' ';
}
