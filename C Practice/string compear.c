#include<stdio.h>
int main()
{
    char s1[100],s[100];
    int c=1,i;
    scanf("%s%s",s,s1);
    c=1;
    i=0;
    while(s[i]!='\0'|| s1[i]!='\0'){
        if (s[i]!=s1[i]){
            c=0;
            break;
        }
        i++;
    }

   if(c==1)
        printf("same");
    else
        printf("Not same");


        return 0;

}

