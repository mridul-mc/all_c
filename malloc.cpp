#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stu
{
	int n;
	char na[5];
	int ro;
};
int main()
{
	struct stu* ptr;
	ptr=(struct stu*)malloc(sizeof(struct stu));
	if(ptr==NULL)
	{
		printf("Out of memory\n");
	}
	else
	{
		printf("Enter student details\n");
		scanf("%d %s %d",&ptr->n,ptr->na,&ptr->ro);
	}
	printf("%d %s %d",ptr->n,ptr->na,ptr->ro);
}
