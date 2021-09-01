#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
int rev(char a[],int);
int con(char a[],int);
int cou(char a[]);
int coun(char a[],int);
int main()
{
	char st[' '],z;
	int n,num;
	do{
	
	printf("Enter a sentens:");
	gets(st);
	num=strlen(st);
	printf("\n[1] Reverse the string	\n[2] Convert all Lowercase characters to uppercase	\n[3] Count word,space,digit	\n[4] Count vowel & consonants	\n[5] Exit\nEnter a choise:");
	scanf("%d",&n);
	printf("\n");
	switch(n)
	{
		case 1:
			rev(st,num);
			break;
		case 2:
			con(st,num);
			break;
		case 3:
			cou(st);
			break;
		case 4:
			coun(st,num);
			break;
		case 5:
		//	exit(0);
		default:
			printf("Don't match");
		
	}
	printf("\nDo you want to continue this program(y/n):");
	scanf("%c",&z);
	z=getche();
	printf("\n");
	printf("\n");
	}while(z=='y' || z=='Y');

	return(0);
}
int rev(char st[],int num)
{
	int i,j,mid;
	char rem;
	mid=num/2;
	for(i=0,j=num-1;j>=mid;j--,i++)
	{
		rem=st[i];
		st[i]=st[j];
		st[j]=rem;
	}
	puts(st);
}
int con(char st[],int num)
{
	int i,j;
	char sr[' '];
	for(i=0,j=0;j<num;i++,j++)
	{
		if(st[j]>='a' && st[j]<='z')
		sr[i]=st[i]-32;
	}
	puts(sr);
}
int cou(char st[])
{
	int i=0,noch=0,nosp=0,nod=0;
	while(st[i]!='\0')
	{
		noch++;
		if(st[i]==' ')
		nosp++;
		else if(st[i]=='0'||st[i]=='1'||st[i]=='2'||st[i]=='3'||st[i]=='4'||st[i]=='5'||st[i]=='6'||st[i]=='7'||st[i]=='8'||st[i]=='9')
		{
			nod++;
		}
		i++;
	}
	printf("\nNo of char=%d \t no of sp=%d dig:%d",noch,nosp,nod);
}
int coun(char st[],int num)
{
	int vou=0,con=0,i;
	for(i=0;i<num;i++)
	{
		if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'||st[i]=='A'||st[i]=='E'||st[i]=='I'||st[i]=='O'||st[i]=='U')
		{
			vou++;
		}
		else
		{
			con++;
		}
	}
	printf("vou:%d con:%d",vou,con);
}
