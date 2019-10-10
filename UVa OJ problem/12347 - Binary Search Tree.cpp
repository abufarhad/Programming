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
#define l(s)                      s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define inf                  1<<28
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define mem(a,i)          memset(a, i, sizeof(a))
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)
#define N 10001
typedef struct _tnode
{
	_tnode* left;
	_tnode* right;
	int     val;
}Farhad;
Farhad node[N];
ll   cnt = 0;

ll bst_insert(Farhad* &r, ll value)
{
    if(!r){
    r=&node[cnt++];
    r->val=value;
    r->left=NULL;
    r->right=NULL;
    }
    else if(value<r->val)bst_insert(r->left, value);
    else bst_insert(r->right, value);
}
ll bst_post( Farhad *r)
{
    if(r)
    {
        bst_post(r->left);
        bst_post(r->right);
        printf("%lld ", r->val);
    }
}

ll a[N];
int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      i=0;
     while (~scanf("%d", &a[i]))	i ++;

      x=i;
      if(x)
      {
          Farhad *bst_root=NULL;
          fr(i,x)
          {
              bst_insert(bst_root, a[i]);
          }
          bst_post(bst_root);
      }

return 0;
}


