#include<stdio.h>
#include<string.h>
int main()
{
    //int i,j,k;
    char s[100],s1[100];

    while(scanf("%s%s",s,s1)!=EOF)
    {
            if (strlen(s)>strlen(s1))
          printf("a > b\n");
          else  if (strlen(s)<strlen(s1))
          printf("a < b\n");

        else  if (strcmp(s,s1)==0)
            printf("a = b\n");

           else  if (strcmp(s,s1)>0)
            printf("a > b\n");

           else
            printf("a < b\n");
    }


    return 0;
}
