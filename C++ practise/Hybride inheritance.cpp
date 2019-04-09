#include<bits/stdc++.h>
using namespace std;
class info{
    int marks,id;
public:
    int getid( ){ cout<<"Enter id"; cin>>id; return id;}
     //void getmarks( ){ cin>>marks; cout <<marks<<endl;}
};
class lab{
    int lmarks;
public:
int getlmark(){cout<<"Enter lmarks"; cin>>lmarks;return lmarks;}
};
class exam:public lab{
    int marks;
public:
int getmark(){ cout<<"Enter marks"; cin>>marks;return marks+getlmark();}
};
class result:public info,public exam{
public:
    void getresult(){
        int sid=getid();
        int res=getmark();
        cout<<"Id->"<<sid<<" "<<"Result->"<<res;}
};
int main(){
result ob;
ob.getresult();
return 0;
}

