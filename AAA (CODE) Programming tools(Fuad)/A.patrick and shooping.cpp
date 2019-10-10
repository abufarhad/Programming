#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

int main()
{
    ll d1,d2,d3;
    cin>>d1>>d2>>d3;
    ll sum;
    sum=min(d1,d2);
    ll tem_min=min(d1,d2);
    ll tem_max=max(d1,d2);
    sum=sum+min(d3,d1+d2);
    sum=sum+min(d3+tem_min,tem_max);
    cout<<sum<<endl;
    return 0;
}
