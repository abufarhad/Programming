#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    int ln,i;
    scanf("%s%s",s1,s2);
    for(ln=0;s1[ln]!='\0';ln++);
    s1[ln]=' ';
    ln++;
    for(i=0;s2[i]!='\0';i++)
         s1[ln+i]=s2[i];
    s1[ln+i]=s2[i];
    printf("%s",s1);
    return 0;

}
