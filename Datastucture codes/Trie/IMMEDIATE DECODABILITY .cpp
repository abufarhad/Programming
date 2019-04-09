#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;
#define ll long long
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
int main()
{
    ll i,m,n,k,j=0;
    vector<string>v;
    string s,s1;
    while(cin>>s)
    {
        if(s[0]=='9')
        {
            j++;
            bool cnt=0;
            sort(v.begin(), v.end());

            // fr(i,m)cout<<v[i]<<endl;

            fr(i,v.size()-1)
            {
                s1=v[i+1].substr(0,v[i].size());
                if(s1==v[i])
                {
                    cnt=1;
                    break;
                }
            }

            if(cnt==1)
                printf("Set %lld is not immediately decodable\n", j);
            else
                printf("Set %lld is immediately decodable\n",j);
            v.clear();
        }

        else
            v.pb(s);

    }
}
