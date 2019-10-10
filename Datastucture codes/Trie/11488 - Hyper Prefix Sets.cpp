#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll i,m,n,cur,ans,ans1,mx,f,last,l;
ll ss, sss;
string s;

struct tri
{
    ll nxt[2];
    ll cnt;
} nd[100009];

void new_tri(ll n)
{
    nd[n].nxt[0]=-1;
    nd[n].nxt[1]=-1;

    nd[n].cnt=1;
}


void string_insert()
{
    l=s.size(), cur=0;

    for(i=0; i<l; i++)
    {
        ll index=s[i]-'0';
        if(nd[cur].nxt[index]==-1 )
        {
            nd[cur].nxt[index]=last;
            new_tri(last++);
            cur=nd[cur].nxt[index];
           // cout<< "if i = "<<i<<"  cur= "<<cur<<endl;
        }
        else
        {
            //cout<< "else i = "<<i+1<<" nd[cur].cnt= "<<nd[cur].cnt<<endl;

            cur=nd[cur].nxt[index];
            nd[cur].cnt++;
            mx=(i+1)*nd[cur].cnt;
           // cout<<"mx = "<<mx<<endl;
            ans=max(ans, mx);
        }
    }
    //cout<<ans<<" Be ---0-ans-1--- "<<ans1<<" l= "<<l<<endl;
    ans1=max(l, ans1);
    //cout<<ans<<" Af ---0-ans-1--- "<<ans1<<" l= "<<l<<endl;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ans=0,mx=0,last=1, ans1=0;
        ans=0, mx=0, last=1, sss=0;
        new_tri(0);
        cin>>n;
        while(n--)
        {
            cin>>s;
            string_insert();
        }
        cout<<max(ans,ans1)<<endl;
    }
}
