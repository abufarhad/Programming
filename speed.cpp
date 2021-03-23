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

#include <vector>
#include <map>
#include <string>
#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)          scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pf(x)               printf("%lld ",x)

#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
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

#define N 10005
ll k;

int main()
{
    ll t;
    cin>>t;
    //t=1;
    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=1,sum=0 ;

        cin>>k>>n;
        map<ll , ll>mp;
        ll a[n];

        //map<ll , vector<ll> >mp1;

        vector<ll>v[N];

        fr(i , n)cin>>x , mp[x]=1 , a[i]=x , v[x].pb(i);



        fr(i , n)
        {
            x=a[i];
            //cout<<x<<" "<<k-x<<endl;

            if(mp[k-x] )
            {
                if(v[k-x].size()>1 )
                {
                    cout<<v[x][0]+1<<" "<<v[k-x][1]+1<<endl;
                }
                else cout<<v[x][0]+1<<" "<<v[k-x][0]+1<<endl;

                break;
            }
        }

        //cout<<x<<" "<<y<<endl;


    }
    return 0;
}

/*
4
4 5
1 4 5 3 2

4 4
2 2 4 3

*/
