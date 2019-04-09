#include<stdio.h>
int main()
{
    int n,d,e;
    scanf("%d",&n);

    if(n<7){
        e=2;}
    if(n>7 && n%7!=0){
        e=((2*n)/7)+2;}
        else
            e=(2*n)/7;

d=(2*n)/7;
    printf("%d  %d",d,e);
    return 0;
}
