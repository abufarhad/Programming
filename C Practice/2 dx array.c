#include<stdio.h>
int main()
{
    double maths[2][5];
    int c,r,M;
    for(c=0;c<2;c++)
    {
        for(r=0;r<3;r++)
        {
            scanf("%lf ",&maths[c][r]);
        }

    }
    for(c=0;c<2;c++)
    {
        for(r=0;r<3;r++)
        {
    printf("class=%d  Roll=%d  Marks=%lf\n",c+6,r+1,maths[c][r]);
        }


}
    return 0;
}
