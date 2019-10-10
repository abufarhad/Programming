#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>mp;
    map<string,int>::iterator it;

    int n;
    cin>>n;
    string str;
    for(int i=0;i<n;i++){
        cin>>str;
        mp[str]=i;
    }
    it=mp.begin();
    while(it!=mp.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }



    /*
    ********SEARCHING AN ITEM**************
    cin>>str;
    if(mp.find(str)!=mp.end())
        cout<<"yes"<<endl;
    else
        cout<<"NO"<<endl;
    */
    return 0;
}
