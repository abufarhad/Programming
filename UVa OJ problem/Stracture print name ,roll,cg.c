#include<stdio.h>
struct student
{
	char name[30];
	int roll, mark;
};
int main()
{
	struct student a[00];
	int i, n;
	printf("How many students: ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("Name: ");
		scanf("%s", a[i].name);

		printf("Roll: ");
        scanf("%d", &a[i].roll);
        printf("Mark: ");
        scanf("%d", &a[i].mark);
	}
	printf("\nName               Roll       Mark");
	printf("\n````               ````       ````");
	for(i=0; i<n; i++)
		printf("\n%-10s       %4d      %4d", a[i].name, a[i].roll, a[i].mark);
	return 0;}


