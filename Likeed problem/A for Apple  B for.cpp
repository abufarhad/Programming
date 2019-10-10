#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl 	    "\n"            /// Main culprit
#define fr(i,n) for(ll i=0;i<n;i++)
#define pb push_back

bool cmp(string s, string s1)
{
    for(ll i=0; i<s.size(), i<s1.size() ; i++)
    {
        char x,y,c,d;
        x=s[i], y=s1[i], c=x, d=y;

        if(x>='a' and x<='z')x-=32;
        if(y>='a' and y<='z')y-=32;

        if(x>y)return 0;
        else if(x<y) return 1;
        else if(c>d)return 0;
        else if(c<d) return 1;
    }

    if(s.size()< s1.size())return 1;
    else return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);  ///Culprit
    cin.tie(0);                                  ///Culprit
    ll m,n,i,j,k;
    string s1;

    cin>>n;
    while(n--)
    {
        deque<string>s[4];
        cin>>m;
        fr(i,m)
        {
            cin>>s1 ;
            if(s1[0]=='A') s[0].pb(s1);
            if(s1[0]=='B') s[1].pb(s1);
            if(s1[0]=='C') s[2].pb(s1);
            if(s1[0]=='D') s[3].pb(s1);
        }

            sort(s[0].begin(), s[0].end(), cmp);
            sort(s[1].begin(), s[1].end(), cmp);
            sort(s[2].begin(), s[2].end(), cmp);
            sort(s[3].begin(), s[3].end(), cmp);

        cin>>k;
        while(k--)
        {
            char a,c; string b;
            cin>>a>>b>>c;
            if( s[a-'A'].size() ==0 ) cout<<"Already Mastered"<<endl;
            else
            {
                cout<<s[a-'A'][0]<<endl;
                s[a-'A'].pop_front();
            }
        }
    }
}
