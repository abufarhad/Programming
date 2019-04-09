#include<iostream>
using namespace std;

class s{
int l,x;
public:

    void set(int w,int y)
{
        l=w;  x=y;
    }
    int area(){ return l*x;}};
 int main(){
    s a;
   // int b;
    a.set(7,8);
    s *b;
      b=&a;
     cout<<  b->area();

   // return 0;
}
