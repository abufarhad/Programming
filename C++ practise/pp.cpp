#include<bits/stdc++.h>
using namespace std;
class c{
int a;
public:
    c(){ a=0;}
    int get(){ return a;}
    void operator ++ ( ){ a++;}
};
int main(){
c a1,a2;
a1=a1++;
 a2++; ++a2;
cout<<a1.get()<<endl;
cout<<a2.get()<<endl;
}

class A{

 int n;
protected : int x,y;
public:   void get( ){  cin>>n;}

A operator + ( A &a){
A t;
t.n=n+a.n;
return t;
}
A operator - ( A &a){
A t;
t.n=n-a.n;
return t;
}

void d(){ cout<<n;}};
int main(){
A a1,a2,a3;
a1.get(); a2.get();
a3=a1+a2;
cout<<"Addition of two number"<<endl;
a3.d();
cout<<endl<<"subtraction of two number"<<endl;
a3=a1-a2;
a3.d();
}
virtual void set( ){ cout<<"class A";}};
 void set( ){ cout<<"class A";}};
class B: public A{
private : int a;
public: void set( ){ cout<<"Class B";}
};
class c: public B{
private : int a;
public: void set( ){ cout<<"Class c";}
};
//void daughter::show(){ x=20 ; set( 10,20); y=100;}
//int x=0;
//    inline void f1( ){ x++;}
//    inline void f2(){ x+=3; f1();}
int main(){

  A*ptr;
  B obB;
 // obB.set();
  ptr=&obB;
  //ptr=new c();
  ptr->set();
    // cout<<x<<endl;
//daughter d;
//d.show();
}

