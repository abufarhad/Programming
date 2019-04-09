#include<bits/stdc++.h>
using namespace std;

float func(float y)
{
    return sqrt(1-y*y);
}

float func1(float x)
{
    return x*x*x;
}

int main()
{
    float a,b,c,d,x,y;
    printf("Enter two initial value \n");
    cin>>a>>b;
    if(((a/(sqrt(1-a*a)))<1)&&((3*b*b)<1))
    {
        while(1)
        {
            x=func(a);
            y=func1(b);
            if(x<1&&y<1)
            {
                a=y;
                b=x;
                printf(" x=%.3f   y=%.3f  \n",x,y);
            }
            else  break;
        }
    }
    else printf("Not setisfied");
}
