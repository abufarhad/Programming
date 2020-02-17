#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define test_case(t)  printf("Case %d:\n",t)
#define N 100005
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             printf("Case %lld:\n",i)
#define mem(a,i)            memset(a, i, sizeof(a))


ll sum[3*N], Lazy[3*N],  Maxval ;

void ini(ll node, ll left, ll right )
{
    Lazy[node] = -1 ;
    sum [ node] = 0;
    if(left == right )  return ;

    ll mid = ( right + left) /2 ;
    ini(2*node,left,mid);
    ini(2*node+1,mid+1,right);

}

void LazYPropagrate(ll idx,ll left,ll right)
{
    if(left!=right)
    {
        Lazy[2*idx] = Lazy[idx];
        Lazy[2*idx+1] = Lazy[idx];
    }
    sum[idx] = Lazy[idx]*((right-left)+1);
    Lazy[idx] = -1;
}



void update(ll node,ll left,ll right,ll x,ll y,ll val)
{
    if(Lazy[node]!=-1) LazYPropagrate(node,left,right);

    if(left>y || right < x)   return ;

    if( x<=left && right<=y )
    {
        sum[node] = val*((right-left)+1);
        if(left!=right)
        {
            Lazy[2*node] = val;
            Lazy[2*node+1] = val;
        }
        return ;
    }


    ll mid =(right + left ) /2;
    update(2*node,left,mid,x,y,val);
    update(2*node+1,mid+1,right,x,y,val);
    sum[node] = sum[2*node]+ sum[2*node+1];

}

ll query(ll node,ll left,ll right,ll x,ll y)
{
    if(Lazy[node]!=-1)
        LazYPropagrate(node,left,right);
    if(left>y || x>right || left>right)
        return 0;

    if(x<=left && y>=right )
    {
        return sum[node];
    }

    ll mid = (left + right ) /2 ;
    ll res = 0;
    res = query(2*node,left,mid,x,y) + query(2*node+1,mid+1,right,x,y);
    //sum[node] = sum[2*node]+ sum[2*node+1];
    return res;
}


int main()
{
    ll t;
    scl(t);
    tcas(z,t)
    {
        ll q,n,m,k;
        scl(n), scl(q);
        pcas(z);

        ini(1, 0, n-1);

        while(q--)
        {
            ll l, r,p, x,y,val;
            scl(p);
            if(p==1)
            {
                scl(x), scl(y), scl(val);
                update(1,0,n-1, x, y, val);
            }
            else
            {
                scl(x), scl(y);
                ll ans=query(1, 0, n-1, x, y);
                ll num=(y-x+1);
                if(ans%num==0)
                    pfl(ans/num);
                else
                {
                    ll gcd=__gcd(ans, num);
                    printf("%lld/%lld\n",ans/gcd,num/gcd);
                }
            }
        }
    }
}
