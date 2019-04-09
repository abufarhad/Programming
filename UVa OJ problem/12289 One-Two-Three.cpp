#include<bits/stdc++.h>
using namespace std;
int main(){
int i,j,t,cnt=0;
string s,o="one";
cin>>t;
while(t--){
    cin>>s;
    if(s.length()==5){ cout<<"3"<<endl; }
else if(s.length()==3){
      cnt=0;
    for(i=0;i<s.length();i++){
            if(s[i]==o[i]) cnt++;} // cout<<cnt<<endl;
                (cnt>=2)? cout<<"1"<<endl : cout<<"2"<<endl;
}}
return 0;
}

