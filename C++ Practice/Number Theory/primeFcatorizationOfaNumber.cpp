#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000005
ll SmallestP_factor[N];

///Complexity O(log n)

void seive()
{
    SmallestP_factor[1]=1;
    for(ll i=2 ; i<=N ; i++)SmallestP_factor[i]=i;
    for(ll i=4; i<=N; i+=2)SmallestP_factor[i]=2;

    for(ll i=3; i*i<=N ; i+=2)
    {
        if(SmallestP_factor[i]==i)
        {
            for(ll j=i*i ; j<=N; j+=i)
            {
                if(SmallestP_factor[j]==j)SmallestP_factor[j]=i;
            }
        }
    }
   //for(ll i=2; i<50; i++)cout<<SmallestP_factor[i]<<" ";
}

void primefactorize(ll n)
{
    vector<ll>pf;
    while(n!=1)
    {
        //cout<<SmallestP_factor[n]<<" ";
        pf.push_back( SmallestP_factor[n]);
        n/=SmallestP_factor[n];
    }
    //cout<<pf.size()<<endl;
    for(ll i=0; i<pf.size(); i++)cout<<pf[i]<<" ";
    cout<<endl;
}
int main()
{
    ll m,n,i,j,k,t;
    cin>>t;
    seive();
    while(t--)
    {
        cin>>n;
        primefactorize(n);
    }
}
