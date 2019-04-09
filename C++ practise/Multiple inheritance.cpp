#include<bits/stdc++.h>
using namespace std;
  class A{
    int marks;
public:
    void get( ){ cout<<"c";}//cin>>marks; cout <<marks<<endl;}
};
class B{
    int id;
public:
      void get( ){ cout<<"B";}//cin>>id;cout <<id<<endl;}
};
class C: virtual public A,virtual public B{
//public:
    //void printf(){ }//getc();  get();}
};
int main(){
C ob1,ob2;
//ob1.printf();
ob1.get();
return 0;
}
