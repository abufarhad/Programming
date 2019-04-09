#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,a;
    int i,j,t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        //  int cnt=0,cn=0,cnn=0,cnnn=0;
        getline(cin,s);
        int  l=s.length();
        stack<char> stk;
        for(i=0; i<l; i++)
        {
            if(!stk.empty()&&s[i]==')' &&stk.top()=='(')
            {
                stk.pop();   //cout<<"position is="<<s[i]<<" "<<i<<endl; cout<<"Top is"<<stk.top()<<endl;
            }
            else if(!stk.empty() &&s[i]==']' && stk.top()=='[')
            {
                stk.pop();  // cout<<"position is="<<s[i]<<" "<<i<<endl; cout<<"Top is"<<stk.top()<<endl;
            }
            else stk.push(s[i]);   //cout<<"Push is  -"<<s[i]<<endl;
        }
        if(stk.empty())
        {
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }

    return 0;
}
