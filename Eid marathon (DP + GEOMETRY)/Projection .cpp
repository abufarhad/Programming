#include<bits/stdc++.h>
using namespace std;
typedef complex<double> P;

P project(P a,P b,P c)
{
    //b-=a,c-=a;
    //return a+b*real(c/b);
    return a + (b - a) * real( (c-a)/ (b-a));//  dot(c - a, b - a) / norm(b - a)
}

int main()
{
    int n;
    double ax,ay,bx,by,cx,cy;
    cin>>ax>>ay>>bx>>by>>n;
    while(n--)
    {
        cin>>cx>>cy;

        P p=project(P(ax,ay),P(bx,by),P(cx,cy));
        printf("%.8f %.8f\n",p.real(),p.imag());
    }
    return 0;
}

/*
typedef complex <double> point;

double dot(point a,point b){
  return a.x*b.x+a.y*b.y;
}

point projection(point a,point b,point c){
  point d = b - a;
  return a+d*(dot(c-a,d)/(abs(d)*abs(d)));
}
*/
