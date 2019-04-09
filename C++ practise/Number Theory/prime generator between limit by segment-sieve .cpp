#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .

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

#define file_read(filename)  freopen("input.txt","r",stdin);
#define file_write(filename)  freopen("output.txt","w",stdout);

#define sv(a) sort(a.begin(),a.end())
#define sortD(a)  sort(a,a+n,greater<int>())
#define sortA(a)  sort(a,a+n)

vector<ll>sg,segment;
#define Max 10000000

ll p[Max],k=1,pm[Max];
bool a[Max];



ll prime(ll n)
{
    ll i,j;

    memset(a,true ,sizeof(a));

    for ( i=2; i*i<=n; i++)
    {
        if(a[i]==true)
        {
            for( j=i*2; j<=n; j += i)
                a[j]=false;
        }
    }

    ll k=0;
    for(i=2; i<=Max; i++)
    {
        if(a[i]==true)
        {
            p[k]=i;
            //cout<<i<<" ";
            k++;
        }
    }
}



//ll prime()
//{
//    ll i,j;
//    a[0]=a[1]=1;
//    for(i=4;i<=Max;i+=2)
//    {
//        a[i]=1;
//    }
//    for(i=3;i<=sqrt(Max);i+=2)
//    {
//        for(j=i*i;j<=Max;j=j+2*i)
//        {
//            a[j]=1;
//        }
//    }
//    p[0]=2;
//
//    for(i=3;i<=Max;i+=2)
//    {
//        if(a[i]==0)
//        {
//            p[k]=i;
//            //cout<<p[k]<<" ";
//            k++;
//        }
//    }
//}

void segment_sieve(ll l, ll u)
{
    ll root,start ,i,j,si;
    sg.clear();
    root=sqrt(u)+1;

    for(i=l; i<=u; i++)
    {
        sg.push_back(i);
    }
    if(l==0) sg[1]=0;
    else if(l==1) sg[0]=0;

    for(i=0; p[i]<=root; i++)
    {
        si=p[i];
        start=si*si;
        if(start<l)
        {
            start=((l+si-1)/si)*si;
        }

        for(j=start; j<=u; j=j+si)
        {
            sg[j-l]=0;
        }
    }
}

int main()
{
    ll n,m,i,j,k,l,u,t;
    prime(Max);

//    for(i=0;i<20;i++) cout<<pm[i]<<" ";
//        cout<<endl;

    scl(t);

    for(m=1; m<=t; m++)
    {
        scl(l),scl(u);
        segment_sieve(l,u);

        for(i=l; i<=u; i++)
        {
            if(sg[i-l]!=0)
            {
                segment.push_back(sg[i-l]);
            }
        }


        printf("Case %lld: \n",m)//segment.size());
        for(i=0;i<segment.size();i++)
        {
            cout<<segment[i]<<endl;
        }
        segment.clear();
        sg.clear();
        //cout<<endl;
    }

    return 0;
}
