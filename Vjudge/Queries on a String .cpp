#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long
#include <string>

vector<string>v;

void subString(string s, int n)
{
    // Pick starting point in outer loop
    // and lengths of different strings for
    // a given starting point
    for (int i = 0; i < n; i++)
        for (int len = 1; len <= n - i; len++)
           v.push_back( s.substr(i, len) );
}


int main()
{
    ll m,n,i,j,cnt=0;
    string s,t,s1,p;
    char c;
    cin>>s>>n;

    substring(s);

    while(n--)
    {
        cin>>s1;

        if(s1=="push")
        {
            cin>>c;
            p+=c;

           // if(strstr(s.c_str(),s1.c_str()))
           if(s.find(p) != std::string::npos)
                cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;

                    cout<<s<<" "<<p<<endl;
        }

        if(s1=="pop")
        {
          //p= p.substr(0, p.size()-1);
          p.erase(p.size()-1);

            cout<<p<<endl;

           // if(strstr(s.c_str(),s1.c_str()))
            if(s.find(p) != std::string::npos)
                cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;

        }

    }

}

