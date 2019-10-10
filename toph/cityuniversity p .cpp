#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

int main()
{
    ll m,n,x,i,y;
    set<ll>s;
    vector<ll>ans;
    cin>>m>>n>>x;
    ll b[x];
    fr(i,m)cin>>y, s.insert(y);   fr(i,n)cin>>y, s.insert(y);

    fr(i,x)
    {
        cin>>y;
        if(s.find(y) !=s.end())ans.push_back(y);
    }
    if(ans.empty())cout<<"Null Set"<<endl;
    else
    {
        for(i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
    }
}
