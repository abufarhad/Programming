#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pb                  push_back
#define pn                  printf("\n")

ll ternary_search(ll l, ll r, ll key, ll ar[])
{
    while(l<=r)
    {
        ll mid1=l+(r-l)/3;
        ll mid2=r-(r-l)/3;

        if(ar[mid1]==key)return mid1;
        if(ar[mid2]==key)return mid2;

        if(ar[mid1] >key)r=mid1-1;
        else if(ar[mid2]<key)r=mid2+1;
        else
        {
            l=mid1+1;
            r=mid2-1;
        }

    }
    return -1;
}

int main()
{
    ll i,j,k,l,r;
    ll ar[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    l=0, r=9;
    ll key=5;
    ll t_s=ternary_search(l,r,key,ar);
    cout<<t_s<<endl;
}
