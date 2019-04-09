#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .


ll calculate(ll hist[ ],ll n)
{
    stack<ll>s;
    ll i=0,max_area=0,tp, area;


    while(i<n)
    {
        if(s.empty() || hist[s.top()]<hist[i])
        {
            s.push(i++);
        }
        else
        {
            tp=s.top();
            s.pop();
            if(s.empty())
            {
                area=hist[tp]*i;
            }
            else
                area=hist[tp]*(i-s.top()-1);

            max_area=max(max_area,area);
        }
    }
    // cout<<i<<endl;

    while(!s.empty())
    {
        tp=s.top();
        s.pop();
        if(s.empty())
        {
            area=hist[tp]*i;
        }
        else
            area=hist[tp]*(i-s.top()-1);

        max_area=max(max_area,area);
    }

    return max_area;
}


int main()
{
    ll  m,n,t,b,d,i,j;

    ll r,c,a[100][100];
    ll  hist[145];
    cin>>r>>c;

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cin>>a[i][j];
        }
    }


    ll   k=r,cn[145],cnt=0,f=0;

    for(i=0; i<c; )
    {
        if( r>0)
        {
            if(a[r-1][i]==0) cnt++;
            r--;
        }
        else
            {
                r=k,i++;
                hist[f]=cnt;
                f++, cnt=0;
            }
    }
    n=c;


    for(i=0; i<n; i++)
    {
        cout<<hist[i]<<" ";
    }
    cout<<endl;

    cout<<calculate( hist,n)<<endl;

}







