#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<time.h>

void main()
{
    int h=0,m=0,s=0;
    while(1)
    {
        if(s>59){m=m+1;s=0;}
        if(m>59){s=s+1;m=0;}
        if(h>59){h=0;m=0;s=0;}s=s+1;
        delay(1000);

        clrscr();
        printf("Dijital clock \n");
        printf("HOUR : MINUTE : SECOND\n");
        printf("%d : %d : %d",h,m,s);

    }
}
