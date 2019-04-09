#include<stdio.h>
int main()
{
    int a,b,c,d=0;
    for(a=0;a<10;a++)
    {
        for(b=0;b<10;b++)
        {
            for(c=0;c<10;c++)
            {
                if(a*a*a+b*b*b+c*c*c==a*100+b*10+c){
                    printf("%d^3+%d^3+%d^3=%d\n",a,b,c,a*100+b*10+c);
                    d++;
                }
            }
        }
    }
    printf("%d",d);
    return 0;
}
