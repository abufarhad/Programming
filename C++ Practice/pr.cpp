#include<bits/stdc++.h>
using namespace std;
class A{
    int marks;
public:
 virtual void getc(void  ){ cout <<"Class A"<<endl;}
};
class B:public A{
    int id;
public:
    void getc(void ){ cout <<"Class B"<<endl;}
};
class C:public B{
public:
    void getc(void){ cout<<"Class C";}
};
int main(){
A* ptr;
B obj;
ptr=&obj;
ptr=new C();
ptr->getc();
return 0;
}


