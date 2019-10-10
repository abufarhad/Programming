#include<bits/stdc++.h>
using namespace std;
#define ll                  long long

ll coin[]={1,5,10, 25,50};
ll way[7490];
int main()
{
    ll make;
    memset(way, 0, sizeof(way));
    way[0]=1;
    ll i,j;
    for(i=0;i<5;i++) for(j=coin[i];j<=7489;j++)  way[j]+=way[j-coin[i] ];

    while(cin>>make)cout<<way[make]<<endl;
}
