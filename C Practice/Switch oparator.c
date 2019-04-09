#include<stdio.h>
int main()
{
   int gread,score;
   printf("Enter student score :");
   scanf("%d",&score);
   gread=score/10;
    switch(gread)
    {
    case 8:
        printf("your gtread is A+");break;

    case 7:
        printf("your gread is A");break;
    case 6:
        printf("your gread is B+");break;
    case 5:
        printf("your gread is B");break;
    case 4:
        printf("your gread is C+");break;
    default :
    printf("You are fail");
    }

   return 0;
}
