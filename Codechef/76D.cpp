
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  cout<<endl;
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)



int main()
{
    fast;
    ll t;

    unsigned  ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    unsigned ll cnt=0,ans=0,sum=0;
    cin>>n>>m;

    if(n<m  or   ((n%2==1 and m%2==0) or (n%2==0 and m%2==1) ))cout<<"-1"<<endl;
    else
    {
        x=(n-m)/2;
        y=m+x;

       //bitset<7>bt1(m)  ; bitset<7>bt2(x)  ;bitset<7>bt3(y);
       //cout<<bt1<<endl<<bt2<<endl<<bt3<<endl;

       cout<<x<<" "<<y<<endl;
    }


return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




