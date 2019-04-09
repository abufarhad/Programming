//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .
#define sortD(a)  sort(a,a+n,greater<int>())
#define sortA(a)  sort(a,a+n)


int main()
{

    ll m,n,i,j,t;
    double a1[100005],a2[100005],r,ans;
    //scl(t);
    cout << fixed << setprecision(2);
    map<double,double>mp;
    //while(t--)
    //{
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>a1[i]>>a2[i];
            mp[a2[i]]=a1[i];
        }

        sortD(a1);

        double x=0,x1=0; ll cnt=0;
        for(i=0; i<n; i++)
            x+=a1[i];

        for(i=0; i<n-m; i++)
            x1+=a1[i];

        sortD(a2);

        for(i=0; i<n; i++)
        {
            if( mp[a2[i]]==a1[i] ) continue;
                else
                {
                    x1+=a2[i];
                    cnt++;
                }
            if(cnt==m) break;
        }

        //cout<<x<<" "<<x1<<endl;
        r=max(x,x1);

        ans=r/n;
        cout<<ans<<endl;

    //}

    return 0;
}

