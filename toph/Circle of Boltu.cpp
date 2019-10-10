#include<bits/stdc++.h>
using namespace std;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define asort(a)            sort(a,a+n)
#define ll long long
struct farhad
{
    ll x,y;
};
ll diff(farhad p, farhad q){ return ( ((p.x-q.x )*(p.x-q.x ) ) + ((p.y-q.y )*(p.y-q.y )));}

int main()
{
    ll m,n,i,k;
    ll ans, a,b,c;
    cin>>n;

   fr1(j,n)
    {
        priority_queue<ll>q;
        cin>>k;
        farhad a[k];

        fr(i,k) cin>>a[i].x>>a[i].y;

        for(i=0; i<k; i++)
        {
            for(int j=i+1; j<k; j++)
            {
                q.push(diff(a[i], a[j]));
            }
        }
        cout<<"Case "<<j<<": "<<q.top()<<endl;
    }


}
