#include<stdio.h>
int main()
{

    FILE *pt;
    pt=fopen("d:\\practice\\"my test.dat","r");
    //char input[44];
    fscanf(pt,"%d %d",&a,&b);
    //puts(pt,"%d %d",&a,&b);
    printf("%d",a+b);
    return 0;

}
