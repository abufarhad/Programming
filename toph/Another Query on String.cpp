
///Incomplete

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string a,s,s1;
    ll m,n,i,j,b,c,x,y,cnt;
    char ch;
    cin>>n>>m>>s;
    while(m--)
    {
        cin>>a;
        if(a=="1")
        {
            cin>>x>>s1;
            s.insert( x-1,s1);
            s.erase( s.begin()+x);
        }
        else
        {
            cnt=0;
            cin>>x>>y>>ch;
            for(i=x-1;i<=y-1;i++)
            {
                if(s[i]==ch)cnt++;
            }
            cout<<cnt<<endl;
        }

    }
}
