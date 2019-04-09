#include<iostream>
#include<algorithm>
using namespace std;

class rectangle
{
    int hight;
    int width;
public:
    int area();
    void set(int h,int w);
    rectangle(int h,int w);
    ~rectangle();
};
int rectangle::area()
{
    return hight*width;
}
rectangle::rectangle(int h,int w)
{
   hight=h;
   width=w;
   cout<<"Constractor "<<area()<<endl;
}
rectangle::~rectangle()
{
//   hight=6;
//   width=5;
   cout<<"Distractor "<<area()<<endl;
}

int main()
{
    int h,w;
    rectangle obj(3,5),obj1(2,4);
    //obj.set(5,6);
   // cout<<"area ="<<obj.area()<<endl;

     return 0;

}

