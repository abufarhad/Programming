#include<bits\stdc++.h>
using namespace std;
int main()
{
int   q[9],l=0,r=0,n=9,x;
    while(1){
        cin>>x;
  if((l==1 && r==n)||(l==r+1)){
        printf("OVERFLOEW\n");  return 0;
    }
    else{
    if(l==0){
        l=1; r=1;
    }
    else if(r==n){
        r=1;
    }
    else  r=r+1;
    q[r]=x;
    }}
    return 0;
}
