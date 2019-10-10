#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>
#define dbg printf("xxxx");
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    long long n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    long long amount=0,slice=0,salt=0;

    amount=(k*l)/nl;
    slice=c*d;
    salt=p/np;
    //cout<<amount<<" "<<slice<<" "<<salt<<endl;
    long long res=min3(amount,slice,salt);
    cout<<res/n<<endl;

    return 0;
}
