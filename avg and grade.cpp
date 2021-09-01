#include<stdio.h>
#include<conio.h>
int main()
{
	int s1,s2,s3,s4,s5,avg;
	printf("Enter the no of subject1:");
	scanf("%d",&s1);
	printf("Enter the no of subject2:");
	scanf("%d",&s2);
	printf("Enter the no of subject3:");
	scanf("%d",&s3);
	printf("Enter the no of subject4:");
	scanf("%d",&s4);
	printf("Enter the no of subject5:");
	scanf("%d",&s5);
	avg=(s1+s2+s3+s4+s5)/5;
	printf("average is:%d",avg);
	
	printf("\n");
	if(avg>=80 && avg<100)
	printf("G:AA");
	
    else if(avg>=70 && avg<79)
	printf("G:A");
	
	else if(avg>=60 && avg<69)
	printf("G:B+");
	
	else if(avg>=50 && avg<59)
	printf("G:B");
	
	else if(avg>=40 && avg<49)
	printf("G:C");
	
	else
	printf("G:Fail");
	
	return(0);
}
