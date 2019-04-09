#include<bits/stdc++.h>
using namespace std;
int main(){
int m,n,d,e,f,g,h;
cin>>n;
//while(f!=1){
d=n/10;
e=n%10;
f=pow(d,2)+pow(e,2);
//

if(f!=1) {
while(f>1){
        f=n;
    g=n/10;
h=n%10;
f=pow(g,2)+pow(h,2);
}}
if(f==1){  cout<<"Happy number it is"; }
else  cout<<"Happy number not";



return 0;}
