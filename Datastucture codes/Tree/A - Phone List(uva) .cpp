#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
string s,s1;
ll  j,k,m,n,query,last=1,cur,f;

struct tri
{
    ll child[11];
    bool is_end_of_word;  // isEndOfWord is true if the node represents  end of a word

} nxt[100009];

void new_tri_getnode( ll cur)
{
    fr(i,11) nxt[cur].child[i]=NULL;
    nxt[cur].is_end_of_word=false;
};

void insert_string(  )
{
    cur=0,k=s.size();

    fr(i, k)
    {
        ll index=s[i]-'0';
        if( nxt[cur].child[index]==NULL )
        {
           // cout<<"cur before if= "<<cur<<"  i= "<<i<<endl;
            nxt[cur].child[index]=last;
            new_tri_getnode(last++);
            cur=nxt[cur].child[index];
            //cout<<"cur After if= "<<cur<<"  i= "<<i<<endl;
        }
        else
        {
            //cout<<"cur else= "<<cur<<"  i= "<<i<<endl;
            cur=nxt[cur].child[index];
            if(nxt[cur].is_end_of_word==true ) f=1;
            if(i==s.size()-1 ) f=1;
        }
        if(f==1) break;
    }
    nxt[cur].is_end_of_word=true;
    //cout<<" nxt "<< cur<<endl;
}

int main()
{
    cin>>n;
    while(n--)
    {
        cin>>m;
        f=0,last=1;
        new_tri_getnode(0);

        fr(i,m)
        {
            cin>>s;
            insert_string( );
        }

        if(f==1)cout<<"NO\n";
        else cout<<"YES\n";
    }
}

