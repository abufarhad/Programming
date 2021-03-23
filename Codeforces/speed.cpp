//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)          scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pf(x)              printf("%lld ",x)

#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"No"<<endl
#define pys                 cout<<"Yes"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define all(x) 	            (x).begin(), (x).end()
#define allrev(x)           (x).rbegin(),(x).rend()
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define pn                  printf("\n")

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define el                  cout<<endl
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pai                 acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define seg_tree(n) 	    ll left=n*2,right=l+1,mid=(l+r)/2
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 200005


int main()
{
    ll t;
    //cin>>t;
    t=1;
    tcas(cs, t)
    {
        int  m,n,c,d,i,j,k,x=0,y,z,l,r, p, q;

        ll cnt=0, cn=0, ans=0;
        string a, b;

        cin>>a>>b>>k;

        fr(i,  min(a.size(), b.size() ) )
        {
            if(a[i]==b[i] )  cnt++;
            else
            {
                x=i;
                break;
            }
        }

       //ll baki=max(a.size(), b.size() )-cnt;

        if(a.size()<=b.size() )
        {
            ll dif=b.size() -cnt;
            if(cnt==a.size() )
            {
                if(k>= dif)pys;
                else pno;
            }
            else
            {
                ll ex=a.size()-cnt;
                ll tot= ex+dif;

                if(k>= tot)pys;
                else pno;
            }
        }
        else
        {
            ll ex=a.size()-cnt;
            if(cnt==b.size())
            {
                if(k>= ex)pys;
                else pno;
            }
            else
            {
                ex+=b.size()-cnt;
                if(k>= ex)pys;
                else pno;
            }
        }
    }
    return 0;
}
