#include<iostream>
using namespace std;


class rectangle {
public:
    int higth ;
    int width;
    int area();

};

 inline int rectangle ::area()
{
    return higth * width;
}

int main()
{
  rectangle obj;
  obj.higth=5;
  obj.width=6;
  cout <<"Area="<<obj.area()<<endl;

          return 0;
}
