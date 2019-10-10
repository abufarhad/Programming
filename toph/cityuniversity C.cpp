#include<bits/stdc++.h>
using namespace std;
int cnt[30];
int main()
{
    set<char>st;
    int n,m,ans=0;
    string s;
    cin>>n;
    while(n--)
    {
        memset(cnt,0,sizeof(cnt));
        ans=-22;
        cin>>s;
        for(int i=0; i<s.size(); i++) cnt[s[i]-'a' ]++;
        for(int i=0; i<26; i++) ans=max(ans, cnt[i]);

        cout<<s.size() - ans<<endl;
    }

}
