#include<stdio.h>
int main()
{
    char c,result;
    printf("Enter a cherecter :");
    scanf("%c",&c);
    result=((c>='a'&&c<='z')||(c>='A'&&c<='Z'))?printf(" alphabet"):printf("cherecter");
    return 0;
}

