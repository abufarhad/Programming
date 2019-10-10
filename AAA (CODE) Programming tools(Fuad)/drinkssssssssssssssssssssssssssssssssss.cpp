
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n,i,j,shop[100001];


int main(){

    //ll n;///number of shops
    cin>>n;

    for(i=1;i<=n;i++)
        cin>>shop[i];

    sort(shop+1,shop+1+n);


    ll q;///mumber of days
    cin>>q;
    ll coins[100001];
    for(i=1;i<=q;i++)
        cin>>coins[i];
    ll s;///how many shops;
    int res[100001];


    for(i=1;i<=q;i++){


        ll Start,End,Mid,ans=0,num;
        Start=0;
        End=n;
        num=coins[i];
        while(Start<=End){
                Mid=(int)((Start + End)/2);

                if(num>=shop[Mid]){
                    ans=Mid;
                    Start=Mid+1;
                }
                else
                    End=Mid-1;
        }
            cout<<ans<<endl;
    }


    return 0;
}
