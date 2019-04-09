//BAKI ACHE

#include<iostream>
using namespace std;
int main(){
int info[]={1,2,3,4,5,6,7};
int start=3,item,ptr,loc,avail=6,prev[]={1,2,3,0,4,3,5},link[]={1,3,2,4,5,4,6};
cout<<"Enter item";
cin>>item;
loc=-1;  ptr=start;
while(start!=0){
    cout<<info[start]<<endl;
}
while(ptr!=0){
    if(info[ptr]==item){
        loc=ptr;
    break;}
    ptr=link[ptr];
}
cout<<loc;
return 0;}
