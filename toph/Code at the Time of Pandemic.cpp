
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)


unsigned ll total[35]  , nw[35];
void calc()
{
    total[0]=1 , nw[0]=0;
    fr1(i,31)
    {
        total[i]= total[i-1]*3;
        nw[i]=total[i-1]*2;
    }
}

int main()
{
    ll t, n;
    cin>>t;
    calc();
    fr1(i, t)
    {
    cout << "Case " << i << ":" << endl;
    cin>>n;
    fr1(j, n)
    {
        cout << "Day = " << j << ", New = " << nw[j-1] << ", Total = " << total[j-1] << endl;
    }
    }

return 0;
}



