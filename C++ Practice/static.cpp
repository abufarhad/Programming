#include<iostream>
using namespace std;
class f{
   static  int a;
public:
    f( ){  a=0;}
   // int get( ){ return a; }
    void s( ){a++; } //cout<<a<<endl;}
};
int f::a;
int main()
{  f b,c,d;
cout<<b.s();
//c.s();d.s();
//cout<<c.get()<<endl;
//cout<<d.get()<<endl;
}
