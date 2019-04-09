#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,langth;
    string str;
    cin>>str;
    int cnt=0,cntt=0;
    langth=str.size();
    for(i=0;i<langth;i++)
    {

        if(str[i]=='1'){
            cnt++;}

        if(str[i]=='0'){
            cntt++;}

             if(cnt>=7||cntt>=7)
                break;
            }
        if(cnt>=7||cntt>=7)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    return 0;
}
