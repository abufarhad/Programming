#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    char *rev;
    printf("Enter  string : ");
    scanf("%s",str);
    rev = strrev(str);
    printf("Reverse string is : %s",rev);

    return 0;
}
