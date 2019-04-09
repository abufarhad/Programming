//#include<bits/stdc++.h>
//using namespace std;
//const size_t l=8;
//
//int main(){
//    string p,q,a,b,r;
//    cin>>p>>q>>r;
//    bitset <l>m(p),n(q),o(r);
//    bitset <l>s=~m;
//    bitset<l>e=~n;
//    bitset<l>k=m|n;
//    bitset<l>t=m&n;
//
//bitset<l>u=m&n;
//bitset<l>i=~u;
//bitset<l>j=i&n;
//
//
//if(t==j){ printf(" The euation (!p | !q) and ((!p & q) & r)  Equvelent \n");}
//else printf(" The euation (!p | !q) and ((!p & q) & r)  not Equvelent \n");
//
//    return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y,z,i,j,k,d;
cin>>z;
for(i=0;i<z;i++){
for(j=z;j>=0;j--){
d= i*i+j*j;
if(d==z*z){ printf("(X,Y) = (%d %d)\n",i,j); break;}   }}
return 0;
}

