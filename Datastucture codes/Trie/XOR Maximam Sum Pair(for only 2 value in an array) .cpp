///For 2 value only maximam xor pair value

#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct tri
{
    tri *left;
    tri *right;
};

void Insert(tri *root, ll n )
{
 tri* cur=root;
  for(ll i=31;i>=0;i--)
  {
      ll b=(n>>i)&1;
      if(b==0)
      {
          if(!cur->left)
          {
              cur->left=new tri();
          }
          cur=cur->left;
      }
      else
      {
          if(!cur->right)
          {
              cur->right=new tri();
          }
          cur=cur->right;
      }
   }
}

ll max_xorr( tri *root, ll *a , ll n)
{
    ll max_xor=INT_MIN;
    for(ll i=0;i<n;i++)
    {
        ll value=a[i];          //current value
        tri *cur=root;
        ll cur_xor=0;
        for(ll j=31;j>=0;j--)
        {
            ll b=(value>>j)&1;
            if(b==0)
            {
                if(cur->right )
                {
                    cur_xor+=pow(2,j);
                    cur=cur->right;
                }
                else cur=cur->left;
            }
            else
            {
                if(cur->left)
                {
                    cur_xor+=pow(2,j);
                    cur=cur->left;
                }
                else cur=cur->right;
            }
        }
        if(cur_xor>max_xor)max_xor=cur_xor;
    }
    return max_xor;
}

int main()
{
    ll m,n,k,i,j,t;
    cin>>t;
    while(t--)
    {
        tri *root=new tri();
        cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            Insert(root, a[i]);
        }
        cout<<max_xorr(root, a, n)<<endl;
    }
}
