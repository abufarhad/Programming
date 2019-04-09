#include<bits/stdc++.h>
using namespace std;

int main(){
int i,j,m,n,cnt=0,fnum1=0,fnum2=1,fnum=0;
//cin>>n;
//freopen("inputr.txt","r",stdin);
 cin>>n;
//freopen("outputr","w",stdout);
for(i=0;i<n;i++){

if(i==0) { cout<<" "<<fnum1<<" "; continue;}
if(i==1) { cout<<" "<<fnum2<<" ";  continue; }

  fnum=fnum1+fnum2;
  fnum1=fnum2;
  fnum2=fnum;
cout<<" "<<fnum<<" ";
}
//cout<<endl<<"Step no : "<<(cnt*3);
return 0;

}


