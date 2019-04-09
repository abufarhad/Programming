#include<bits/stdc++.h>
using namespace std;
class A{
    int x,y;
    public:
  A (){ x=0; y=0;}
  A(int xx,int yy){ x=xx; y=yy;}
  A(A *obj){ x=obj->x; y=obj->y;}
  //void d(){ cout<<x<<" "<<y;}
  int get_x(){ return x;}
    int get_y(){ return y;}
};
int main(){
A ob(20,40);
A ob1=ob;
cout<<"ob1="<<ob.get_x()<<endl;
cout<<"ob2="<<ob1.get_x()<<endl;
//ob.d();
return 0;
}



