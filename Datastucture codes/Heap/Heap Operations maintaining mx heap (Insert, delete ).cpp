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

vector<ll>heap_tree;

void  mx_heapify( ll i )
{
    ll largest=i ; //Let , root as largest element for now
    ll sz=heap_tree.size() ,  left=2*i+1 , right=left+1;

    if(left<sz  and heap_tree[left] > heap_tree[largest] )   largest=left;
    if(right<sz  and heap_tree[right] > heap_tree[largest] )  largest=right;

    if(largest != i )swap( heap_tree[i] , heap_tree[ largest ] ) , mx_heapify(largest);
}

/*
void  mn_heapify( ll i )
{
    ll smallest=i ; //Let , root as smallest element for now
    ll sz=heap_tree.size() ,  left=2*i+1 , right=left+1;

    if(left<sz  and heap_tree[left] < heap_tree[smallest] )   smallest=left;
    if(right<sz  and heap_tree[right] < heap_tree[smallest] )  smallest=right;

    if(smallest != i )swap( heap_tree[i] , heap_tree[ smallest ] ) , mn_heapify(smallest);
}
*/

void Insert(ll val)
{
    heap_tree.pb(val);
    if(heap_tree.size() > 0)
    {
        ll sz=heap_tree.size();
        for(ll i=sz/2-1 ; i>=0; i--)
        {
            mx_heapify( i );
        }
    }
}

bool Search(ll val)
{
    fr(i , heap_tree.size())if(heap_tree[i]==val)return true;
    return false;
}

void Delete(ll val)
{
     ll pos;
     fr(i , heap_tree.size())if(heap_tree[i]==val){pos=i; break;}

     ll sz=heap_tree.size();
     swap(heap_tree[pos] , heap_tree[sz-1]);  // swap with last element

     heap_tree.pop_back();  //erase last element form vector

     for(ll i=sz/2-1 ; i>=0; i--)  mx_heapify( i );
}

void print_vector()
{
    fr(i , heap_tree.size())cout<<heap_tree[i]<<" ";pn;
    cout<<"Done"<<endl;
}

int main()
{
   ll n , m , i , j;

   while(1)
   {
       scl(n);
       if(n==1)
       {
           cout<<"Inserting...... "<<endl;
           scl(m);
           Insert(m);
           cout<<"Done"<<endl;
       }
       else if(n==2)
       {
           cout<<"Deleting...... "<<endl;
           scl(m);
           if(Search(m)) Delete(m) , cout<<"Done"<<endl;
           else cout<<"Value Not Found"<<endl;
       }
       else if(n==3) cout<<"Printing...... "<<endl , print_vector();
   }

return 0;
}

