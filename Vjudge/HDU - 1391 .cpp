#include<iostream>
using namespace std;

#define ll long long

int main()
{
    ll n,m,x,y,i,ans;
    cin>>m;
    while(m--)
    {
        ans=0;
        cin>>x>>y;
        if( x==y || x==y+2)
        {
            if(x&1 && y&1 )
                ans=(x+y-1);

               if( x%2==0 && y%2==0)
                ans=x+y;

                cout<<ans<<endl;
        }
        else
        cout<<"No Number"<<endl;

    }
}
