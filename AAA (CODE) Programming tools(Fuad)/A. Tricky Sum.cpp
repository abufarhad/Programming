#include<bits/stdc++.h>
using namespace std;

#define pp pair<ll,ll>
#define dbg printf("AAA");
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
typedef long long int ll;

int main()
{
    int t;
    cin>>t;
    ll n,total,two,j,i,res;

    for(i=0;i<t;i++){
        cin>>n;
        total=0;two=0;j=1;
        total=(n*(n+1))/2;
        while(j<=n){
            two=two+j;
            j=j*2;
        }
        total=total-two;
        res=total-two;
        cout<<res<<endl;
    }
    return 0;
}
