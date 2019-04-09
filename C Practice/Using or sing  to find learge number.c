#include<stdio.h>
int main()
{
    int a,b,c,n;
    printf("Enter Marks");
    scanf("%d",&n);
    if (n>=80&&n<=100)
        printf("HONORS");
        else if(n>=60&&n<=79)
            printf("FIRST DIVISION");
        else if(n>=50&&n<=59)
            printf("SECOND DIVISION");
        else if (n>=40&&n<=49)
            printf("THIRD DIVISION");
        else
            printf("FAIL");
    return 0;
}
