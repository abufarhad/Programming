 #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
int main()
{
    ll i,m,n,k;
    cin>>n;
    while(n--)
    {
        vector<string>v;
        string s,s1;
        bool cnt=0;
        cin>>m;
        fr(i,m)
        {
            cin>>s;
            v.pb(s);
        }
        sort(v.begin(), v.end());

        fr(i,m)cout<<v[i]<<endl;

        fr(i,v.size()-1)
        {
            s1=v[i+1].substr(0,v[i].size());
            cout<<s1<<endl;
            if(s1==v[i]) {cnt=1; break;}
        }

        if(cnt==1)cout<<"NO\n";
        else cout<<"YES\n";
    }

}

