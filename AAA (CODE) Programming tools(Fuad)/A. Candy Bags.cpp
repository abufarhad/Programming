#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll n,i,p,mid,fr,ls;
    cin>>n;

    mid=n/2;
    fr=1;
    ls=n*n;
    for(i=1;i<=n;i++){
        p=1;
        while(p<=mid){
            cout<<fr<<" ";
            fr++;
            p++;
        }
        p=1;
        while(p<=mid){
            cout<<ls;
            if(p<mid)
                cout<<" ";
            ls--;
            p++;
        }
        cout<<endl;
    }

    return 0;
}

