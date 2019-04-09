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
#define Max 5000006

int main()
{

ll len,i,cn,cnt,cnn,ans;

char c[105];
while(!cin.eof())
{
     cnt=0,cnt=0,cnn=0,ans=0;
    cin>>c;
    len=strlen(c);
    //cout<<"len "<<len<<endl;
    for(i=0;i<len;i++)
    {
        if(islower(c[i])) cnt++;
            if(isdigit(c[i])) cn++;
             if(isupper(c[i])) cnn++;
               if(cn>=1&&cnn>=1&&cnt>=1)  {cnt=cn=cnn=0; ans++;}
               else continue;
    }
           // cout<<cn<<" "<<cnn<<" "<<cnt<<endl;

printf("%lld\n",ans);
}

    return 0;
}

