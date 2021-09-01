#include<stdio.h>
#include<conio.h>
int main()
{
/*	int n,*p,**c;
	n=10;					//initialise the value of n
	
	p=&n;					//store the address of n in pointer P
	
	printf("%d\n",n);		//show the value of n i.e 10
	
	printf("%d\n",*p);		//show the valueof n through pointer i.e 10
	
	printf("%d\n",p);		//show the address of n through pointer
	
	printf("%d\n",&n);		//show the address of n*/
		int var=10;
	int *ptr=&var;
//	*ptr=20;
	
	int **ptr2=&ptr;
//	**ptr2=30;
	
	printf("value of variable:%d\n",var);								
	printf("value of variable through pointer:%d\n",*ptr);		
	printf("value of variable through 2nd pointer:%d\n",**ptr2);		
	printf("address of variable:%d\n",&var);							
	printf("address of variable through pointer or value of 1st pointer:%d\n",ptr);
	printf("address of variable through 2nd pointer:%d\n",*ptr2);
	printf("address of 1st pointer:%d\n",&ptr);
	printf("address of 1st pointer through 2nd pointer or value of 2nd pointer:%d\n",ptr2);
	printf("address of 2ndpointer:%d\n",&ptr2);
	return(0);
}
