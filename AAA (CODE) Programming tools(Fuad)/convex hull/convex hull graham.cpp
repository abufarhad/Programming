#include<bits/stdc++.h>
using namespace std;

struct point
{
    double x;
    double y;
}p[100],c[100],origin;


int n_pair,n_hull;


double area(point a,point b,point c)
{
    return (a.x*(b.y-c.y)+b.x*(c.y-a.y)+c.x*(a.y-b.y));

}

double dist(point a,point b)
{
    return ((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
}

bool cmp_slope(point a,point b)
{
    if(area(origin,a,b)==0.0)
        return dist(origin,a)<dist(origin,b);

   double d1x=a.x-origin.x;double d1y=a.y=origin.y;
   double d2x=b.x-origin.x;double d2y=b.y-origin.y;

   return (atan2(d1y,d1x)-atan2(d2y,d2x))<0;
}

void convex_hull()
{

    int i, j, pos = 0;
    for(i=1; i<n_pair; i++){
        if(p[i].x<p[pos].x || (p[i].x==p[pos].x && p[i].y>p[pos].y))
            pos = i;
	}

    swap(p[0], p[pos]);
    origin=p[0];

    sort(&p[1],p+n_pair,cmp_slope);

    c[0]=p[0];
    c[1]=p[1];
    c[2]=p[2];


    for(i=j=3;i<n_pair;i++)
    {
        while(area(c[j-2],c[j-1],p[i])<=0)
            j--;

        c[j++]=p[i];

    }
    n_hull=j;


}

int main()
{

    cin>>n_pair;

    for(int i=0;i<n_pair;i++)
        cin>>p[i].x>>p[i].y;


    convex_hull();

    cout<<"\n\n\tNumber of points in the convex hull : "<<n_hull<<endl;

    for(int i=0;i<n_hull;i++)
        cout<<"ll"<<endl;
        //cout<<"("<<p[i].x<<","<<p[i].y<<")"<<"\t";


    return 0;
}
