#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,d, e,r,cnt;
    while(scanf("%lld",&d)==1)
    {
        if(d==0) break;
        cnt=0;

        while(1)
        {
            while(d!=0)
            {
                cnt=cnt+d%10;
                d=d/10;
            }

            if(cnt/10 ==0) break;
            else d=cnt;
            cnt=0;
        }
        cout<<cnt;
    }
    return 0;
}

