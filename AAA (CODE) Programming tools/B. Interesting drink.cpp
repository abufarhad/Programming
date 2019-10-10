#include<bits/stdc++.h>
using namespace std;

typedef long long ll;ll n;///number of shops

ll binary(ll arr[],ll num){

    ll Start,End,Mid,i,j,s;
    Start=0;
    End=n-1;
     if(num<arr[0])
        return 0;
     else if(num>=arr[n-1])
        return n;
    else{
        while(Start<=End){
            Mid=(int)((Start + End)/2);
            if(num==arr[Mid]){
                break;
            }
            if(num>arr[Mid])
                Start=Mid+1;
            else
                End=Mid-1;
    }

    if (num>=arr[Mid])
         s=Mid;
    else
         s=Mid-1;

    for(j=s;j<End;j++){
                if(arr[j]==arr[j+1])
                    s=s+1;
                else
                    break;
            }
     return s+1;

    }
}


int main(){

    //ll n;///number of shops
    cin>>n;
    ll i,j,shop[100001];
    for(i=0;i<n;i++)
        cin>>shop[i];

    sort(shop,shop+n);


    ll q;///mumber of days
    cin>>q;
    ll coins[100001];

    ll s;///how many shops;
    int res[100001];
     for(i=0;i<q;i++){
        cin>>coins[i];
        cout<<binary(shop,coins[i])<<endl;
    }

    return 0;
}
