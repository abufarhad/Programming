#include<bits/stdc++.h>
using namespace std;

float calc(float ang)
{
    return  ((ang*acos(-1))/180.0);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float n, m, a, h, ang, x, y;

        cin>>a>>ang;

        x =a/cos(calc( 90- ang)) ;
        y=x*sin(calc(90-ang));

        printf("%.10f\n", (x+y));
    }
    return 0;
}
