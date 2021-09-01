#include<stdio.h>
#include<conio.h> 
int main()  
{  
	int start,end,i;
	printf("Enter the year from:");
	scanf("%d",&start);
	printf("Enter the year to:");
	scanf("%d",&end);
    for(i=start;i<=end;i++)
    {
	    if(i%100==0 && i%4==0)  
	    {  
	        if(i%400==0)  
	        {  
	            
	        }  
	        else  
	        {  
	            printf("%d is not leap year!\n", i);  
	        }  
	    }    
	}
    return 0;  
}  
