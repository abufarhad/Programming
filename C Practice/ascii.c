#include<stdio.h>
int main()
{
    int i;
    char l,m;
    for(i=0;i<256;i++)
    {
        printf( "ASCII = %d  : %c\n",i,i);
    }
    scanf("%c%c",&l,&m);
    printf("%d",l+m);
    return 0;
}
