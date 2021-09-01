#include<stdio.h>
#include<conio.h>
int main()
{
	int cp,ta,c;
	printf("1.One year old Car\n2.Two year old car\n3.Three year old car\n4.Four year old car\n5.More than four year old car\nEnter your choice:");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			printf("Enter showroom price:");
			scanf("%d",&cp);
			ta=(cp*10/100);
			printf("\nOriginal price:%d",cp);
			printf("\nDepricated Value:%d",ta);
			printf("\nAmount to be paid:%d",cp-ta);
			break;
		case 2:
			printf("Enter showroom price:");
			scanf("%d",&cp);
			ta=(cp*20/100);
			printf("\nOriginal price:%d",cp);
			printf("\nDepricated Value:%d",ta);
			printf("\nAmount to be paid:%d",cp-ta);
			break;
		case 3:
			printf("Enter showroom price:");
			scanf("%d",&cp);
			ta=(cp*30/100);
			printf("\nOriginal price:%d",cp);
			printf("\nDepricated Value:%d",ta);
			printf("\nAmount to be paid:%d",cp-ta);
			break;
		case 4:
			printf("Enter showroom price:");
			scanf("%d",&cp);
			ta=(cp*50/100);
			printf("\nOriginal price:%d",cp);
			printf("\nDepricated Value:%d",ta);
			printf("\nAmount to be paid:%d",cp-ta);
			break;
		case 5:
			printf("Enter showroom price:");
			scanf("%d",&cp);
			ta=(cp*60/100);
			printf("\nOriginal price:%d",cp);
			printf("\nDepricated Value:%d",ta);
			printf("\nAmount to be paid:%d",cp-ta);
			break;
	}
}
