
///*********RUNTIME ERROR*********
#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
#define ll long long
#define scl(n)              scanf("%lld", &n)

ll i,m,n,cur,ans,ans1,x,mx,f,last,l;
string s;

struct tri
{
    ll nxt[5];
    ll cnt;
} nd[2500000];

void new_tri(int cur)
{
    nd[cur].nxt[0]=-1;
    nd[cur].nxt[1]=-1;
    nd[cur].nxt[2]=-1;
    nd[cur].nxt[3]=-1;

    nd[cur].cnt=1;
}

void string_insert()
{
    l=s.size(), cur=0;

    for(i=0; i<l; i++)
    {
        if(s[i]=='A' ) x=0;
        else if(s[i]=='C' ) x=1;
        else if(s[i]=='G' ) x=2;
        else if(s[i]=='T' )  x=3;

        if(nd[cur].nxt[x]==-1)
        {
            nd[cur].nxt[x]=last;
            new_tri(last++);
            cur=nd[cur].nxt[x];
        }
        else
        {
            cur=nd[cur].nxt[x];
            nd[cur].cnt++;
            mx=(i+1)*nd[cur].cnt;
            ans=max(mx, ans);
        }
    }
    ans1=max(l, ans1);
}

int main()
{
    ll t,k=0;
    scl(t);
    while(t--)
    {
        k++;
        ans=0,mx=0,last=1, ans1=0;
        new_tri(0);
        scl(n);
        while(n--)
        {
            cin>>s;
            string_insert();
        }
        printf("Case %lld: %lld\n",k,max(ans,ans1));
    }
}
