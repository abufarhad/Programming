#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)

#define pfi(x) printf("%d",x)
#define pfl(x) printf("%lld",x)
#define pfd(x) printf("%lf",x)
#define pfc(x) printf("Case %d: ",x++)
#define ps printf(" ")
#define pn printf("\n")

#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define pf(x) push_front(x)
#define ppf(x) pop_front(x)
#define in(x,y) insert({x,y})

#define sv(a) sort(a.begin(),a.end())
#define sortD(a)  sort(a,a+n,greater<int>())
#define sortA(a)  sort(a,a+n)

int main()
{
    ll m,n,i,k,j,l;
    string s,c;

    while((cin>>s))
    {
         list<char>lst;
         list<char>::iterator it;
        l=s.size();
        it=lst.end();
        for(i=0,j=0; i<l; i++)
        {
            if(s[i]=='[')
            {
               // continue;
                it=lst.begin();
            }
            else if(s[i]==']')
               // continue;
                it=lst.end();
            else
                lst.insert(it,s[i]);
        }

        for(it=lst.begin();it!=lst.end();it++)
        {
            cout<<*it;
        }
        cout<<endl;
    }
    return 0;
}

