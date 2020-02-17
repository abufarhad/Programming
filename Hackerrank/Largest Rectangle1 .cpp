#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll largest_area(ll hist[], ll n)
{
    ll mx_area=0, area, tp=0, i=0;

    stack<ll>s;
    while(i<n)
    {
        if(s.empty() || hist[s.top()]< hist[i])s.push(i++);
        else
        {
            tp=s.top();
            s.pop();
            if(s.empty())area=hist[tp]*i;
            else area=hist[tp]*(i- s.top()-1);

            mx_area=max(mx_area, area);
        }
    }

    while(!s.empty())
    {
           tp=s.top();
            s.pop();
            if(s.empty())area=hist[tp]*i;
            else area=hist[tp]*(i- s.top()-1);

            mx_area=max(mx_area, area);
    }

    return mx_area;
}

int main()
{
    ll m, n, i, k, j;
    //cin>>k;

   // for(ll t=1; t<=k; t++) {
    while(cin>>n)
    {
    if(n==0)return 0;
    ll hist[n];
    for(i=0;i<n;i++)cin>>hist[i];
    //printf("Case %lld: ",t);
    cout<<largest_area(hist, n)<<endl;
    }
}
