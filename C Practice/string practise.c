#include<stdio.h>
int main()
{
    int i,j,k,r;
    char s[100]="My name is abu farhad" ,s1[100];

    int base ,address;
    base=(int )(s);
    address=(int )strrchr(s,'n');
    if (address==0)
        printf("..........Not found..........");
        else
    printf(" position of the called charecture is = %d",address-base+1);


       return 0;
}

