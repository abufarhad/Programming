#include<stdio.h>
int main()
{
    char str[1000];
    printf("Enter a string to revarse \n");
    gets(str);
    strrev(str);
    printf("Revarse string is \n%s\n",str);
    return 0;

}
