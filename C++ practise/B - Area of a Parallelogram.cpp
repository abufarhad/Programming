#include<bits/stdc++.h>
using namespace std;

int main(){
double area,s1,s2;
int ax,bx,ay,by,cx,cy,dx,dy,t,i,result;
cin>>t;
for(i=1;i<=t;i++){ area=0;
        cin>>ax>>ay>>bx>>by>>cx>>cy;
dx=ax+cx-bx;
dy=ay+cy-by;

area=((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax));
result= abs(area*.5);

printf("Case %d: %d %d %d\n",i,dx,dy,result);  }

return 0;
}

