#include<bits/stdc++.h>
using namespace std;
class A{
    int marks;
public:
    void getc( ){ cin>>marks; cout <<marks<<endl;}
};
class B{
    int id;
public:
    void get( ){ cin>>id;cout <<id<<endl;}
};
class C:public A ,public B{
public:
    void printf(){ getc();  get();}
};
int main(){
C ob1,ob2;
ob1.printf();
return 0;
}

