#include <bits/stdc++.h>
using namespace std;
int main()
{

    map<char, int>m;
    char c;
    int n,k;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        cin>>c;
        m[c]++;
    }
    for(char i='a'; i<='z'; i++)
    {
        cout<<m[i]<<" ";
        if(m[i]>k)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
