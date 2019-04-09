#include<stdio.h>
int main()
{
    char str[50],len=0;int i;
    gets(str);
    for(i=0;str[i]!='\0';i++){
        len=len+1;}
    printf("Leanth of %s is %d",str,len);
    return 0;
}
