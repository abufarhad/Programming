#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll m,n,k,l,x1,y1,x2,y2,r,p,xdif,q,ydif;
    cin>>x1>>y1>>x2>>y2>>r;


    if(x1>=0 && x2<0 || x1<0 && x2>=0) cout<<"No"<<endl;
    else  if(y1>=0 && y2<0 || y1<0 && y2>=0) cout<<"No"<<endl;

    else if( abs(x2)> abs(x1) || abs(y2)> abs(y1) ) cout<<"No"<<endl;
    else
    {
        m=abs(x2)+r, n=abs(x2)-r;
        p=abs(y2)+r, q=abs(y2)-r;

        xdif= abs(x1)-abs(x2);
        ydif=abs(y1)-abs(y2);

        if(  y1 >=p  && q>=0  && x1>=m && x2>=n)
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
}
