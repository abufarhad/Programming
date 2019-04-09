#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v;
int main()
{
    ll i,j,m,n,f,s,need,sum=0;
    cin>>n>>s;
    //ll a[n];
    for(i=0; i<n; i++)
    {
        cin>>m;
        v.push_back(m);
    }
    //sort(a,a+n,greater<int>());
    sort(v.end(),v.begin());
    ll cnt=0;
    for(i=0; i<v.size(); i++)
    {
        sum=sum+v[i];
        if(sum%s==0)
            cnt++;
    }
    if(cnt>0)
        printf("YES\n");
    else printf("NO\n");

    return 0;
}
