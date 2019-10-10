#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin>>s;
    int cnt=0,x;

    for(int i=0; i<s.size(); i++)  if(s[i]=='0')cnt++;
    //cout<<cnt<<endl;

    if(cnt==s.size())  cout<<0<<endl;
    else
    {
        for(int i=0; ; i++)
        {
            if(s[i]=='0'|| s[i]=='-') continue;
            else    {  cout<<s[i]<<endl;      break;       }
        }
    }

}

