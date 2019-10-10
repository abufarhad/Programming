#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define x real()
#define y imag()
typedef complex<double> point;


string Farhad(point a, point b, point c)
{
   point k=conj(b-a)*(c-a);
   if(k.y>0) return "COUNTER_CLOCKWISE";
   else if(k.y<0) return "CLOCKWISE";
   else if(k.x<0)return "ONLINE_BACK";
   else if(abs(b-a)<abs(c-a) )return "ONLINE_FRONT";
   else return "ON_SEGMENT";
}

int main()
{
    ll m,n;
    double  ax, ay, bx,by, cx,cy;
    cin>>ax>>ay>>bx>>by>>n;
    while(n--)
    {
        cin>>cx>>cy;
        cout<<Farhad(point(ax, ay), point(bx,by), point(cx, cy) )<<endl;
    }

}

