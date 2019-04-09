#include<bits\stdc++.h>
using namespace std;
int main()
{
int   q[]={1,2,3,4,5,6,7,8,9},Front=1,rear=9,n=9,x;
    while(1){
    if(Front==0){
            cout<<"UNDERFLOW"<<endl;
            return 0;
    }
    else{
   x= q[Front-1];
   cout<<x<<endl;
   if(Front==rear){
    Front =0; rear=0;}
    else if (Front==n){
        Front=1;
   }
   else   Front=Front+1;
}}
return 0;}
