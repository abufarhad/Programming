#include<stdio.h>
int main()
{
    char name[100];
    int i;
    printf("Enter your name\n");
    gets(name);
    printf("Ascii code name\n");
    for(i=0;name[i]!='\0';i++)
    printf("%c  %d\n",name[i],name[i]);
    return 0;
}
