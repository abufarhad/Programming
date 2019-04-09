#include<bits/stdc++.h>
using namespace std;

long long bigm(long long b,long long p,long long m)
{
    if(p==0) return 1;
    //if(p==1) return b;
    if(p%2==0)
    {
        long long c=bigm(b,p/2,m);
        return c*c%m;
    }
    if(p%2==1)
    {
        return (b*bigm(b,(p-1),m))%m;
    }
}

int main()
{
    int long long a,b,c,d,res;

    while(cin>>a>>b>>c){
    if(a!=0&&b!=0&&c!=0){
        res=bigm(a,b,c);
        cout<<res<<endl;}
        else return 0;

}}



//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//#define sortD(a)  sort(a,a+n,greater<int>())
//int main()
//{
//    ll i,m,n,a,b;
//    cin>>n;
//    m=n/3;
//    cout<<m<<endl;
//
//    /*
//    ll m,n,b,i,a[100005],t;
//    cin>>t;
//    for(m=1;m<=t;m++){
//    cin>>n;
//
//    for(i=0;i<n;i++)
//    {
//        cin>>a[i];
//    }
//   sortD(a);
//   b=a[0]-a[n-1];
//   printf("%lld\n",b);
//    }
//    */
////    cin>>n>>m;
////    a=(m*(m+1))/2;
////    b=(n*(n+1))/2;
////ll ans=a-b;
////printf("Sum of %lld to %lld is -> %lld;\n",n,m,ans+n);
//
//
//}

