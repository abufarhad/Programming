
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
    char str[100];
    cin>>str;
    int i,num=atoi(str);
    int len=strlen(str);

    ll pre=9,kount=0,p=1,tem=0;
    for(i=1;i<len;i++)
    {
       tem=tem+pre;
       kount=kount+pre*p;
       pre=pre*10;
       p++;
    }
    //cout<<tem<<endl;
    //cout<<kount<<endl;
    kount=kount+((num-tem))*p;
    cout<<kount<<endl;
    return 0;
}
