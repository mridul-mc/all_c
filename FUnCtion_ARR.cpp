#include<stdio.h>
#include<conio.h>
void arr(int ,int );
int main()
{
 //clrscr();
 int a[20],n;
 printf("\nEnter how many nos you need(MAX-20): ");
 scanf("%d",&n);
 arr(a[20],n);
 //getch();
 }

void arr(int x[20],int n)
{
  int i;
  for(i=0;i<n;i++)
    {
      printf("\nEnter a number: ");
      scanf("%d",&x[i]);
    }
	  printf("\nNod in list: ");

			for(i=0;i<n;i++)
				printf("%4d",x[i]);

}
