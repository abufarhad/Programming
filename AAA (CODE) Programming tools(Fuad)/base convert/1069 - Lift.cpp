#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,t=1,man,lift;

    cin>>T;
    while(t<=T){
        cin>>man>>lift;

        cout<<"Case "<<t<<": "<<abs(man-lift)*4+9+10+man*4<<endl;
    ++t;
    }

    return 0;
}
