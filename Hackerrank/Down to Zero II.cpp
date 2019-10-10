//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define asort(a)            sort(a,a+n)

ll bfs(ll n)
{
    vector<ll> node(n + 1, 0);
    queue<ll>q;
    q.push(n);
    ll cnt=0;

    while(!q.empty())
    {
        ll fnt=q.front();
        q.pop();

        if(fnt==0) return node[fnt];

        for(int i=2; i<=sqrt(fnt) ; i++)
        {
            if(fnt%i==0)
            {
                ll newfnt=fnt/i;
                //cout<<newfnt<<" - "<<fnt<<endl;
                if(node[newfnt]==0)
                {
                    node[newfnt]=node[fnt]+1;
                    q.push(newfnt);
                }
            }
        }

        if(node[fnt-1]==0)
        {
            node[fnt-1]=node[fnt]+1;
            q.push(fnt-1);
        }
    }
    // cout<<n<<endl;
    return n;
}

int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0;
    scl(n);
    ll  a[n];
    for(i=0; i<n; i++)
    {
        scl(x);
        pfl(bfs(x));//<<endl;
    }

    return 0;
}

