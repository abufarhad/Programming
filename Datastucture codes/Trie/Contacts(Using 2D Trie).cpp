#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)          scanf("%lld%lld",&n, &m)
#define scc(c)                scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<Endl;
#define pno                 cout<<"NO"<<Endl
#define pys                 cout<<"YES"<<Endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define all(x)                 (x).begin(), (x).End()
#define allrev(x)           (x).rbegin(),(x).rEnd()
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define pn                  printf("\n")
#define  N  1000005

ll n,  tot_node = 0;
ll Next[N][27], End_mark[N];


void Insert(string s)
{
    ll now=0;
    fr(i , s.size())
    {
        ll x=s[i]-'a';
        ll y=Next[now][x];
        if(y==0)
        {
            tot_node++ ;
            Next[now][x]=tot_node;
        }
        now=Next[now][x];
        End_mark[now]++;
    }
}

ll Search(string s)
{
    ll now=0;
    fr(i , s.size())
    {
        ll x=s[i]-'a';
        ll y=Next[now][x];

        if(!y)return 0;
        now=y;
    }
    return End_mark[now];
}


int main ()
{
    cin>>n;
    string s, s1;
    fr(i , n)
    {
        cin>>s>>s1;
        if(s=="add")  Insert (s1);
        else  cout<<Search(s1)<<endl;
    }

    return 0;
}
