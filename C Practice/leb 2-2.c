//Write a program to check weather a cherecter is alphabet or not.

#include<stdio.h>
int main()
{
    char c,result;
    printf("Enter a cherecter :");
    scanf("%c",&c);
    result=((c>='a'&&c<='z')||(c>='A'&&c<='Z'))?printf("cherecter "):printf("not cherecter ");
    return 0;

}
