#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ans[25];
void fac()
{
    ans[0]=1;
    for(ll i=1; i<=20;i++)  ans[i]=i*ans[i-1];
}

int main()
{
    fac();
    ll m,n,i,j,k;
    //while(cin>>n){
        cin>>n;
        string s,s1;
        if(n>20)cout<<"0000"<<endl;
        else
        {
            s=to_string(ans[n]);
            //cout<<s<<endl;
            reverse(s.begin(), s.end());
            //cout<<s.size()<<endl;
            ll  sz=s.size();
            if(s.size()>4)sz=4;
            for(i=0;i<sz ;i++)s1+=s[i];
            reverse(s1.begin(), s1.end());
            cout<<s1<<endl;
        //}
    }
}
