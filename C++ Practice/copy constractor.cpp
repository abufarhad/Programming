#include<bits/stdc++.h>
using namespace std;
class A{
    int x,y;
    public:
 // A (){ x=0; y=0;}
  A(int xx,int yy){ x=xx; y=yy;}
  A(A *obj){ x=obj->x; y=obj->y;}
  void d(){ cout<<x<<" "<<y;}
};
int main(){
A ob(new A(20,40));    //  or  // ob(20,40);
ob.d();
return 0;
}



