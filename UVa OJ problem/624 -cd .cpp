
///******** Incomplete********

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define pb                 push_back
#define fr(i,n)           for (ll i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)
ll sum,m,cd[25],ans_sum,flag,n;
vector<ll>v,ans;

void update( )
{
    ans.clear();
    ans_sum=0;
    fr(i,v.size())
    {
        ans.push_back(v[i]);
        ans_sum+=v[i];
    }
}

ll calc( ll k, ll cd_sum)
{
    for(i=k;i<n;i++)
    {
        if(cd_sum+cd[i]<=sum)
        {
            v.push_back(cd[i]);
            calc(i+1,cd_sum+cd[i]);
            if(cd_sum+cd[i]>=ans_sum)
                update();
            v.pop_back();
        }
    }
}



int main()
{
    ll  t,b,d,i,j,k,y,z;
        while(cin>>sum>>n)
        {
            flag=0;
            fr(i,m)cin>>cd[i];
            calc(0,0);

        }
    }
