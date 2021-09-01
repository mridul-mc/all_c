#include<stdio.h>
#include<conio.h>
int main()
{
	int w,day,k,j,month,year,m,d;
	printf("\nEnter the day:");
	scanf("%d",&d);
	
	printf("\nEnter the month:");
	scanf("%d",&m);
	
	printf("\nEnter the year:");
	scanf("%d",&year);
	
	j=year/100;
	k=year%100;
	w=d+(13+m+13)/5;
	w=w+k+k/4+j/4;
	w=w-2*j;
	w=w%7;
	if(w==0)
 	printf("\nsaturday");
	else if
	(w==1)
	printf("\nsunday");
	else if
	(w==2)
	printf("\nmonday");
	else if
	(w==3)
	printf("\ntuesday");
	else if
	(w==4)
	printf("\nwednesday");
	else if
	(w==5)
	printf("\nthursday");
	else if
	(w==6)
	printf("\nfriday");
	
	return(0);
}
