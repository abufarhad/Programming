#include<bits/stdc++.h>
using namespace std;
int main(){

long long  n,a,b,c,d;
double ans1,ans2;
//cin>>n;
scanf("%lld",&n);
while(n--){
cin>>a>>b>>c>>d;
ans1=b*log(a);
ans2=d*log(c);
if(ans1<ans2) cout<<"<"<<endl;
else cout<<">"<<endl;
}
return 0;
}
