#include<stdio.h>
#include<conio.h>
void convert(int,int);
char chare(int);
int main()
{
	int n,b;
	printf("Enter a no:");
	scanf("%d",&n);
	printf("\nEnter the base:");
	scanf("%d",&b);
	printf("no:%d\tbase:%d",n,b);
	printf("\n");
	convert(n,b);
	return(0);
}
void convert(int m,int c)
{
	int j,ans[16];
	int i=0;
	while(m>0)
	{
		ans[i++]=m%c;
		m=m/c;
	}
	for(j=i-1;j>=0;j--)
	if(ans[i]>=10 && ans[i]<=15)
	printf("%c",chare(ans[j]));
	else
	printf("%d",ans[j]);
	
}
char chare (int m)
{
	switch(m)
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


