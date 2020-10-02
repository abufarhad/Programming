#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define N 1000200
ll f[N];
ll ans=0;

void pre_calc(string s)
{
    ll i=1, j=0 , sz=s.size();
    while(i<sz)
    {
        if(s[i]==s[j]) f[i++]=++j  ;
        else
        {
            if( j) j=f[j-1];
            else f[i++]=0;
        }
    }
}
void kmp(string s, string pattern)
{
    ll i=0, j=0 , sz=s.size();
    pre_calc(pattern);

    while(i<sz)
    {
        if(s[i]==pattern[j])
        {
            i++, j++;
            ans=max(ans, j);
        }
        else
        {
            if(j)j=f[j-1];
            else i++;
        }
    }
}

int main()
{
    ll i, j , n, m;
    cin>>n;
    while(n--)
    {
    memset(f, 0, sizeof(f));
    ans=0;
    string s, s1;
    cin>>s1;
    s=s1;
    reverse(s.begin() , s.end());

    kmp(s, s1 );
    for(i=ans-1; i>=0; i--)cout<<s1[i];
    cout<<endl;

    }
}
