#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char *str;
    int i,len;
    printf("Enter a string to revarse \n");
    scanf("%s",str);
    len=strlen(str)-1;
    for(i=0; i<strlen(str)/2; i++)
    {
        str[i]+=str[len];
        str[len]=str[i]-str[len];
        str[i]=str[i]-str[len--];

    }
    printf("Revarse string is %s",str);
    getch();
    return 0;

}
