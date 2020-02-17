#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Max 100001
#define fr(i,n)             for (ll i=0;i<n;i++)
ll a[Max], tree[Max*4][26];
string s, s1;

void  build_tree(ll nd, ll l, ll r)
{
    if(l==r)
    {
        tree[nd][ s[l]-'a' ]++;
        return;
    }

    ll left=nd*2;
    ll right=nd*2+1;
    ll mid=(l+r)/2;
    build_tree(left, l, mid);
    build_tree(right, mid+1, r);


    fr(i, 26)
    tree[nd][i]=tree[left][i] +tree[right][i];
}

void   update(ll nd, ll l, ll r, ll x, char val)
{
    if(x>r|| x<l) return;

    if(l==x&&r==x )
    {
        tree[nd][ s[l] -'a' ]= 0;
        tree[nd][ val-'a' ]++;
        s[l]=val;
        return;
    }
    ll left=nd*2;
    ll right= nd*2+1;
    ll mid=(l+r)/2;
    update(left, l, mid, x,val);
    update(right, mid+1, r, x,val);

    fr(i, 26)
    tree[nd][i]=tree[left][i] +tree[right][i];

}


ll  query(ll nd, ll l , ll r , ll i, ll j, char ch )
{

    //cout<<i<<" "<<j<<" "<<l<<" "<<r<<endl;
    if(i>r|| j<l) return 0;

    if(l>=i&&r<=j )
    {
        return tree[nd][ch-'a' ];
    }

    // cout<<i<<" "<<j<<" asdn "<<l<<" "<<r<<endl;
    ll left=nd*2;
    ll right=nd*2+1;
    ll mid=(l+r)/2;
    ll p=query(left, l, mid, i,j,ch);
    ll p1=query(right, mid+1, r, i,j, ch);

    return p+p1;

}


int main()
{
    ll i,m,n,j, q;
    cin>>n>>q;

    cin>>s;
   // s="#"+s1;
    //cout<<s.size()<<endl;

    //fr(i, s.size())cout<<i<<" "<<s[i]<<endl;

    build_tree(1, 0, n-1);
    while(q--)
    {
        ll x,y, id, z;
        char c;
        cin>>x;
        if(x==1)
        {
            cin>>id>>c;
            id--;
            update(1, 0, n-1, id, c);
            //update(1, 1, n, id, c);
        }
        else
        {
            cin>>y>>z>>c;
            y--, z--;
            ll ans=query(1, 0, n-1, y, z, c);
            cout<<ans<<endl;
        }
    }
}

/*
9 33
abcccdeef
2 1 4 c
*/
