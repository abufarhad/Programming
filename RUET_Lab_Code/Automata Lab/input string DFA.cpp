#include<bits/stdc++.h>
using namespace std;
vector<string>path;
int main(){
    string a,b="10";
//char b[10]={"10"};
cin>>a;
if ( strstr(a,b)){
    cout<<"Accepted"<<endl;
}
else cout<<"Rejected"<<endl;

path.push_back("q0");
      string state="q0";
      for(int i=0;i<a.size();i++)
      {
         if(state=="q0" and a[i]=='0')
             path.push_back("q0");
        else if(state=="q0" and a[i]=='1')
         {
              path.push_back("q2");
              state="q2";
         }
        else  if(state=="q2" and a[i]=='1')
             path.push_back("q2");
      else  if(state=="q2" and a[i]=='0'){
             path.push_back("q3");
             state="q3";
        }
       else if(state=="q3")
             path.push_back("q3");
      }
      cout<<"Path:\n";
      cout<<path[0];
      for(int i=1;i<path.size();i++)
        cout<<"->"<<path[i];
  }

return 0;
}
