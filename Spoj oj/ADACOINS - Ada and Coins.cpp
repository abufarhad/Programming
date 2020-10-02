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


#define N 100050

bitset<N>s;
ll n, x,y, cmsm[N];

void solve()
{
    s[0]=1;
    fr1(i, n)
    {
        scanf("%lld", &x);
        s|=s<<x;
        //cout<<s<<endl;
    }
    for(ll i=1; i<N; i++) cmsm[i]=cmsm[i-1]+s[i];
}

int main()
{
    ll q,cnt=0,ans=0,sum=0;

    //cin>>n>>q;

    scanf("%lld %lld", &n, &q);
    solve();

    fr(i, q)
    {
        scanf("%lld %lld", &x, &y);
        ans=cmsm[y]-cmsm[x-1];
        printf("%lld\n" , ans);
    }
return 0;
}




