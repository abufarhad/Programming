#include<stdio.h>
int main()
{
    //int max=5;
    int *ptr,x,y;
    int i=0,var[]={1,3,5,7,9};ptr=&var[3];
    x=*--ptr;y=*ptr++;
    printf("%d      %d\n",x,y);
    //y=*ptr--;
    //printf("%d\n",y);

    return 0;
}
