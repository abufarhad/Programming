#include<bits/stdc++.h>
using namespace std;
class info{
    int marks,id;
public:
    void getid( ){ cin>>id; cout <<id<<endl;}
     void getmarks( ){ cin>>marks; cout <<marks<<endl;}
};
class result:public info{
public:
 void printf(){getid();}
};
class student:public info{
public:
    void printf(){   getmarks();}
};
int main(){
student sob;
result rob;
rob.printf();
sob.printf();
return 0;
}

