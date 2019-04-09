#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
long long d,f;
cin>>m>>n;
if(n%2==0){
d=pow(m,n/2);
f=d*d;
cout<<f; }
else
   d=pow(m,((n-1)/2));
f=d*d*2;
cout<<f;
// f=d%1,000,000,007;
//cout<<d<<endl;
//cout<<d<<endl;
return 0;
}
