#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)


map<string, ll>mp;
int main()
{
    ll  i,j,k,m,n,t,cnt;
    string s;
    scanf("%lld\n",&t);

    while(t--)
    {
        cnt=0;
        mp.clear();

        while(1)
        {
            getline(cin,s);
            if(s[0]=='\0')
                break;
            mp[s]++;
            cnt++;
        }

        map<string, ll>::iterator it ;
        for(it=mp.begin(); it != mp.end(); it++ )
        {
            cout<<it->first<<" ";
            double ans=( (double) it->second *100.00)/cnt;
            printf("%.4lf\n",ans);
        }

        if(t>0)
            printf("\n");
    }
    return 0;
}
