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

class Bheap
{
    public:
    vector<ll>v;
    void mx_heapify(ll val);
    void Insert(ll val);
    void Delete(ll val);
    bool Search(ll val);
    void Print();
    ll Top();
};

ll Bheap ::Top()
{
    return v[0];
}

void Bheap:: mx_heapify( ll i )
{
    ll largest=i ; //Let , root as largest element for now
    ll sz=v.size() ,  left=2*i+1 , right=left+1;

    if(left<sz  and v[left] > v[largest] )   largest=left;
    if(right<sz  and v[right] > v[largest] )  largest=right;

    if(largest != i )swap( v[i] , v[ largest ] ) , mx_heapify(largest);
}

void Bheap ::Insert(ll val)
{
    v.pb(val);
    if(v.size() > 0)
    {
        ll sz=v.size();
        for(ll i=sz/2-1 ; i>=0; i--)
        {
            mx_heapify( i );
        }
    }
}

bool Bheap::Search(ll val)
{
    fr(i , v.size())if(v[i]==val)return true;
    return false;
}

void Bheap ::Delete(ll val)
{
     ll pos;
     fr(i , v.size())if(v[i]==val){pos=i; break;}

     ll sz=v.size();
     swap(v[pos] , v[sz-1]);  // swap with last element

     v.pop_back();  //erase last element form vector

     for(ll i=sz/2-1 ; i>=0; i--)  mx_heapify( i );
}

void Bheap ::Print()
{
    fr(i , v.size())cout<<v[i]<<" ";pn;
    cout<<"Done"<<endl;
}

int main()
{
    Bheap h;
    ll n , m ;
   while(1)
   {
       scl(n);
       if(n==1)
       {
           cout<<"Inserting...... "<<endl;
           scl(m);
           h.Insert(m);
           cout<<"Done"<<endl;
       }
       else if(n==2)
       {
           cout<<"Deleting...... "<<endl;
           scl(m);
           if(h.Search(m)) h.Delete(m) , cout<<"Done"<<endl;
           else cout<<"Value Not Found"<<endl;
       }
       else if(n==3) cout<<"Printing...... "<<endl , h.Print();
       else if(n==4)cout<<"Mx element = "<<h.Top()<<endl;
   }
    return 0;
}

