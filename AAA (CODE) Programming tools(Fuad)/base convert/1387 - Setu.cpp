#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,t=1,T,sum,tem;
    cin>>T;
    string str;
    while(t<=T){
        cin>>n;
        sum=0;
        cout<<"Case "<<t<<":"<<endl;
        for(int i=0;i<n;i++){
            cin>>str;
            if(str=="donate"){
                cin>>tem;
                sum+=tem;
            }else{
                cout<<sum<<endl;
            }
        }
        ++t;
    }

    return 0;
}
