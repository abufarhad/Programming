#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>vec;
int main()
{
    ll p,q;
    scanf("%lld",&q);
    for(int i=0;i<q;i++)
    {
       scanf("%lld",&p);
        if(p%2==0)
        {
            vec.push_back(p-1);
        }
        else
         vec.push_back(p);
    }

    for(int i=0;i<vec.size();i++)
    {
        printf("%lld ",vec[i]);
    }
}
