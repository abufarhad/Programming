
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

#define sv(a) sort(a.begin(),a.end())
#define sortD(a)  sort(a,a+n,greater<int>())
#define sortA(a)  sort(a,a+n)

struct node
    {
        int id,solved;
    }a[150000];

bool cmp( node p, node q)
{
    if(p.solved>q.solved) return true; else return false;
}
int main()
{

    int f,n,i,k,t,id;

    cin>>f;
    for(i=0;i<f;i++)
    {
        cin>>a[i].id>>a[i].solved;
    }
    stable_sort(a,a+f,cmp);

     for(i=0;i<f;i++)
    {
        cout<<a[i].id<<" "<<a[i].solved<<endl;
    }
return 0;
}
