
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sortD(a)  sort(a,a+n,greater<int>())
int main()
{
    ll i,n,cnt;

    string s;
    while(cin>>s)
    {
        cnt=0;
        bool a=0,b=0,c=0;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]>='a'&& s[i]<='z') a=1;
            if(s[i]>='A'&& s[i]<='Z') b=1;
            if(s[i]>='0'&& s[i]<='9') c=1;

            if(a==1&&b==1&&c==1)
            {
                cnt++;
                //cout<<cnt<<" ";
                a=0,b=0,c=0;
            }
        }
        cout<<cnt<<endl;
    }
}
