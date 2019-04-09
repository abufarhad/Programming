#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

int main()
{
    ll m,n,i,j,cnt=0;
    string s,t,s1,t1,p,q;
    cin>>s>>s1;


    for(i=0; i<s.size(); i++ )
    {
        if(s[i] !=s1[i] )
        {
            //cout<<s[i]<<" "<<s1[i]<<endl ;
            m=i;
            break;
        }
        else continue;
    }


    for(i=s.size()-1; i>=0; i-- )
    {
        if(s[i] !=s1[i] )
        {
            //cout<<s[i]<<" "<<s1[i]<<endl ;
            n=i;
            break;
        }
        else continue;
    }

    //cout<<m<<" "<<n<<endl;


    for(i=0; i<s.size(); i++)
    {
        if( i>=m )  if( i<=n )
            {
                t+=s[i];
            }
    }

    for(i=0; i<s.size(); i++)
    {
        if( i>=m )  if( i<=n )
            {
                t1+=s1[i];
            }
    }

    reverse(t.begin(), t.end());

    //cout<<t<<" "<<t1<<endl;

    if(t==t1)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
