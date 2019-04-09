#include<bits/stdc++.h>
using namespace std;
int main(){
long long m,n,a,d,e,f,i,b,h,k;
//cin>>i;
//while(i--){
    cin>>m>>n>>a;
      b=m%a; if(b==0 ) { d= m/a; f=d;  } else {d=m/a; f=++d;  }
      h=n%a ; if(h==0 ) {  e=n/a;  k=e;  } else { e=n/a;  k=++e;}//cout<<b<<h<<endl;
   cout<<k*f<<endl;
}
