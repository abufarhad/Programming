#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             printf("Case %lld: ",i)


ll int   kmp(string & text, string & pattern)
{

    ///pattern processing

    ll int suff[100000];

    int i=1;
    int j=0;
    int sz=pattern.size();
    while(i<sz)
    {
        //cout<<i<<endl;
        if(pattern[i]==pattern[j])
        {
            suff[i]=j+1;
            i++;
            j++;
        }
        else
        {
            if(j==0)
            {
                suff[i]=0;
                i++;
            }
            else
            {
                j=suff[j-1];
            }
        }
    }

    ///String matching

    j=0;
    int c=0;
    for(int i=0; i<text.size();)
    {
        if(text[i]==pattern[j])
        {
            i++;
            j++;
        }
        else
        {
            if(j==0)
            {
                i++;
            }
            else
            {
                j=suff[j-1];
            }
        }

        ///counting number of match
        if(j==sz)
        {
            c++;
            i-=j;
            i++;
            j=0;
        }
    }
    return c;
}

int main()
{
    ll m,n,i,j,k;
    cin>>n;
   tcas(x,n)
    {
    string s,t,s1,s2, pattern;
    cin>>s>>pattern;
    pcas(x);
    cout<<kmp(s, pattern)<<endl;
    }
}
