#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

int main()
{
    ll m,n,i,j,k;
    vector<ll>v;
    cin>>n>>k;
    ll a[n];
    fr(i,n)cin>>a[i],v.push_back(a[i]);

    ll x=a[k-1];
    vector<ll>::iterator it;
    it = find (v.begin(), v.end(), x);
    if (it != v.end())
    {
        sort(a,a+n);
        fr(i,n)
        {
            if(a[i]==x) continue;
            else  cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    else
        printf("You fool! I don't have that one\n");

}
