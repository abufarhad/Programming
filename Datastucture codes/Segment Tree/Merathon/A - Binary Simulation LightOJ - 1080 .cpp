#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define test_case(t)  printf("Case %d:\n",t)
#define mx 100005
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             printf("Case %lld:\n",i)
#define mem(a,b)         memset(a, b, sizeof(a))
#define sc              scanf
#define pf              printf


char a[mx];
ll tree[mx*3];

ll n,m;

void init_and_update(ll nd, ll l , ll r, ll x, ll y)
{
    if( y<l || x >r  )return ;
    if( x<=l and y>=r){ tree[nd]++; return ;}

    ll left=nd*2;
    ll right=nd*2+1;
    ll mid=(l+r)/2;

    init_and_update(left, l, mid, x,y);
    init_and_update(right, mid+1, r, x,y);
}

ll query(ll nd, ll l ,ll r, ll target)
{
    if( l==target and r== target){ return tree[nd];}

    ll left=nd*2;
    ll right=nd*2+1;
    ll mid=(l+r)/2;

    if(target<=mid) return tree[nd]+query(left, l, mid, target);
    else return tree[nd]+query(right, mid+1, r, target);


    //if(target<=mid) {cout<<" 1- "<<tree[nd]<<endl ;return query(left, l, mid, target);}
   // else       {cout<<" 2- "<<tree[nd]<<endl ; return query(right, mid+1, r, target);}
}


int main()
{
    ll t,n,m,k;
    scl(t);
    tcas(z ,t)
    {
        mem(tree, 0);
        ll q;
       scanf("%s", a);
       scl(m);
       n=strlen(a);
       fr(i,n)if(a[i]=='1')init_and_update(1,1,n,i+1, i+1);

        pcas(z);
        while(m--)
        {
            getchar();
            char ch;
            sc("%c",&ch);
            if(ch=='I')
            {
                //fr(i, 50)cout<<tree[i]<<" "; cout<<endl;
                ll a,b;
                scl(a), scl(b);
                init_and_update(1,1,n,a,b);
            }
            else
            {
                ll a;
                scl(a);
                //pfl( query(1,1,n,a));
                pfl( query(1,1,n,a)%2 );
            }
        }
    }
    return 0;
}
