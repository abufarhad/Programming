#include<bits/stdc++.h>
using namespace std;

int main(){
int  n,a[20],cnt=0,i,sum=0;
cin>>n;
//cin>>a>>b>>c>>d>>e>>f>>g;
for(int i=0;i<7;i++){ cin>>a[i] ; }


for(int i=0; ;i++){
      sum=sum+a[i]; cnt++;
      if(i==6) i=0 ; cout<<"sum "<<sum<<endl;
    if(sum>=n)   break;
}

cout<<cnt<<endl;
}
