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

#define N 205
string a[N];

ll check(ll x , ll y)
{
    if(x==0 and y==0)return 1;
    else if(x==0 and y==1)return 2;
    else if(x==1 and y==0)return 3;
    else if(x==1 and y==1)return 4;
}

int main()
{
    ll t;
    cin>>t;
    tcas(cs, t)
    {
        ll n,m,b,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        b=2, c=1;
        ll cn=0,ans=0,sum=0 ;
        cin>>n;

        fr(i,n)cin>>a[i];
        x=a[0][1]-'0'  , y=a[1][0]-'0';
        p=a[n-1][n-2]-'0'  , q=a[n-2][n-1]-'0';

        if(x==0  and y==0)
        {
            ll tmp=check(p , q);
            if(tmp==1)
            {
                pfl(b);
                cout<<n<<" "<<n-1<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
            else if(tmp==2)pfl(c), cout<<n<<" "<<n-1<<endl;
            else if(tmp==3)pfl(c), cout<<n-1<<" "<<n<<endl;
            else cout<<0<<endl;
        }
        else if(x==0 and y==1)
        {
            ll tmp=check(p , q);
            if(tmp==1) pfl(c), cout<<1<<" "<<2<<endl;
            else if(tmp==2)
            {
                pfl(b);
                cout<<2<<" "<<1<<endl;
                cout<<n<<" "<<n-1<<endl;
            }
            else if(tmp==3)
            {
                pfl(b);
                cout<<2<<" "<<1<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
            else pfl(c), cout<<2<<" "<<1<<endl;
        }
        else if(x==1 and y==0)
        {
            ll tmp=check(p , q);
            if(tmp==1)pfl(c), cout<<2<<" "<<1<<endl;
            else if(tmp==2)
            {
                pfl(b);
                cout<<2<<" "<<1<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
            else if(tmp==3)
            {
                pfl(b);
                cout<<2<<" "<<1<<endl;
                cout<<n<<" "<<n-1<<endl;
            }
            else pfl(c), cout<<1<<" "<<2<<endl;
        }
        else if(x==1 and y==1)
        {
            ll tmp=check(p , q);
            if(tmp==1) cout<<0<<endl;
            else if(tmp==2)pfl(c), cout<<n-1<<" "<<n<<endl;
            else if(tmp==3)pfl(c), cout<<n<<" "<<n-1<<endl;
            else
            {
                pfl(b);
                cout<<n<<" "<<n-1<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
        }
    }
return 0;
}
