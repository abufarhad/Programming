#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
int main()
{
    int m,n,cnt=0,v,c;
    cin>>n;
    string s;
    while(n--)
    {
        ll vwl=0, csnt=0;
        cin>>s>>v>>c;
        fr(i,s.size())
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='y'||s[i]=='Y')vwl++;
            else csnt++;
        }
        if(vwl==v && csnt==c)printf("Thik gunecho Numan\n");
        else if((vwl==v || csnt==c))printf("Jak ektu rokkhe holo\n");
        else printf("Aaj kopale pituni ache\n");
        printf("\n");
    }
}
