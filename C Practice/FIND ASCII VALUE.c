#include<stdio.h>
int main()
{
    int i;
    char ch;
    for(i=0;i<256;i++){
        printf("%d AScii value is %c \n",i,ch);
        ch=ch+1;

    }
}
