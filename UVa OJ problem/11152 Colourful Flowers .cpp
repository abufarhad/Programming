//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define pb                 push_back
#define fr(i,n)           for (ll i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)
#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define pi                  2*acos(0.0)
int main()
{
    ll m,n;
    double a,b,c,s;
    while(cin>>a>>b>>c)
    {
        s=(a+b+c)/2.0;
        double triengle_are=sqrt(s*(s-a)*(s-b)*(s-c));
        double inner_radious=triengle_are/s;
        double inner_circle_area=pi*inner_radious*inner_radious;
        //double R=(a*b*c)/4.0/triengle_are;
        double R=a*b*c/sqrt(2*s*(b+c-a)*(c+a-b)*(a+b-c));
        double outer_circle=pi*R*R-triengle_are;
        printf("%.4lf %.4lf %.4lf\n",outer_circle,  triengle_are-inner_circle_area,  inner_circle_area);


    }
}
