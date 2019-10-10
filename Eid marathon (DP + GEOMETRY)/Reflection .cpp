#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef complex<double> point;

point Farhad(point a, point b, point c)
{
    return a+ conj( (c-a)/(b-a) )*(b-a);
}

int main()
{
    ll m,n;
    double  ax, ay, bx,by, cx,cy;
    cin>>ax>>ay>>bx>>by>>n;
    while(n--)
    {
        cin>>cx>>cy;
        point p= Farhad(point(ax, ay), point(bx,by), point(cx, cy) );
        printf("%.8lf %.8lf\n", p.real(), p.imag());
    }

}
