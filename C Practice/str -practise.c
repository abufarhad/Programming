#include<stdio.h>
struct cse15
{
    char name[30];
    int roll;
    double cg;
};
void print(struct cse15 student[])
{
    int i;
    for(i=1;i<=2;i++){
    printf("\n\nstudent name =%s\n",student[i].name);
     printf("student Roll =%d\n",student[i].roll);
     printf("student CGPA =%lf\n",student[i].cg);

}}
int main()
{
    struct cse15 student[5];
    int i;
    for(i=1;i<=2;i++){
        scanf("%s%d%lf",student[i].name,&student[i].roll,&student[i].cg);}


print(student);
return 0;
}
