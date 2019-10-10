#include<bits/stdc++.h>
using namespace std;
struct point
{
    int x;
    int y;
}p[100],c[100],po;

int area(point a,point b,point c)
{
    return (a.x*(b.y-c.y) + b.x*(c.y-a.y) + c.x*(a.x-b.x) ) ;
}

int dist(point a,point b)
{
    return (a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y);
}

bool cmp(point a,point b)
{
    if(area(po,a,b)==0)
        return dist(po,a)>dist(po,b);

    double d1x=a.x-po.x;double d1y=a.y-po.y;
    double d2x=b.x-po.x;double d2y=b.y-po.y;

    return ( atan2(d1y,d1x) - atan2(d2y,d2x) ) < 0;
}



void ConvexHull(int np,int &nc)
{
    int i,j,pos=0;

    for(i=1;i<np;i++){
        if( (p[i].x<p[pos].x) || ( p[i].x==p[pos].x && p[i].y>p[pos].y ) )
            pos=i;
    }

    swap(p[0],p[pos]);/// origin fixed
    po=p[0];

    sort(&p[1],p+np,cmp);
    c[0]=p[0];
    c[1]=p[1];
    c[2]=p[2];

    for(i=j=3;i<np;i++)
    {
        while( area(c[j-2],c[j-1],p[i]) <=0 )
            j--;
        c[j++]=p[i];
    }

    nc=j;
}

int main()
{
    int np,nc;
    cin>>np;

    for(int i=0;i<np;i++)
        cin>>p[i].x>>p[i].y;


    ConvexHull(np,nc);

    for(int i=0;i<nc;i++)
        cout<<c[i].x<<" "<<c[i].y<<endl;
    return 0;

}
