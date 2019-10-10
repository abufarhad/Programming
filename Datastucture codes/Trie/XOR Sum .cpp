#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct tri
{
    ll value;
    tri *child[2];
    tri()
    {
        memset(child, NULL, sizeof(child));
        value=0;
    }
};

void Insert(tri *root, ll pre_xor )
{
 tri* cur= root;

 for(ll i=31;i>=0;i--)
 {
     ll b=(pre_xor>> i)&1;  ///or b=pre_xor & (1<<i)

     if(cur->child[b]==NULL ) cur->child[b]=new tri();
     cur=cur->child[b];
 }
 cur->value=pre_xor;
}

ll query(tri *root, ll pre_xor)
{
    tri *cur=root;

    for(ll i=31;i>=0;i--)
    {
         ll b=(pre_xor>> i)&1;
         if(cur->child[1-b] !=NULL )cur=cur->child[1-b];
         else if(cur->child[b] !=NULL )cur=cur->child[b];
    }
    return pre_xor^(cur->value);
}

ll max_xorr(  ll *a , ll n)
{
  tri* root=new tri();
  Insert(root, 0);

  ll res=INT_MIN, pre_xor=0;
  for(ll i=0;i<n;i++)
  {
      pre_xor^=a[i];
      Insert(root, pre_xor);

      res=max( res, query(root, pre_xor) );
  }
  return res;
}

int main()
{
    ll m,n,k,i,j,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++) cin>>a[i];
        cout<<max_xorr( a, n)<<endl;
    }
}
