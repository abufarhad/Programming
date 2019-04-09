#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  a,c,i,ans=0,cnt=0;
    string s;
    cin>>s;
    s=s+'A';
    int l=s.length();
    for(i=1; i<=l; i++)
    {
        if(s[i]=='A' || s[i]=='E'|| s[i]=='I' || s[i]=='O'||s[i]=='U'||s[i]=='Y')
        {
            ans=max(ans, i-cnt);
            cnt=i;
        }
    }
    cout<<ans<<endl;
}
