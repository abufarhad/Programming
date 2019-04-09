#include<stdio.h>
int main()
{
    char s1[1000],s2[100],ch;
    int i;
    printf("Enter a string ");
    gets(s1);
    i=0;
    while(s1[i]!='\0'){
        s2[i]=s1[i];i++;
    }
    s2[i]='\0';
    printf("copied string is %s",s2);
    return 0;

}

