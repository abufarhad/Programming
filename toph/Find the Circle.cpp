//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .


int main()
{

    ll m,i,j,x,ans,t;
    double ax,ay,bx,by,r,cx,cy,R,z1,z2;
    scl(t);
    cout << fixed << setprecision(2);

    while(t--)
    {
        cin>>ax>>ay>>bx>>by>>r;
        cx=((ax+bx)/2);
        cy= ((ay+by)/2);


        z1= (bx-cx)*(bx-cx);
        z2=(by-cy) *(by-cy);

        cout << cx << " " << cy << " " << sqrt(z1+z2)+r << endl;
       // printf("%.2llf %.2llf %.2llf\n",cx,cy,sqrt(z1+z2)+r);

    }

    return 0;
}
