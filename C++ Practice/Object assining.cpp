
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
//    rectangle(int h,int w);
//    ~rectangle();
};
class rectangle1
{
    int hight;
    int width;
public:
    int area();
    void set(int h,int w);
//    rectangle(int h,int w);
//    ~rectangle();
};
inline int rectangle::area()
{
    return hight*width;
}

void rectangle::set(int h,int w)
{
   hight=h;
   width=w;
}
inline int rectangle1::area()
{
    return hight*width;
}

void rectangle1::set(int h,int w)
{
   hight=h;
   width=w;
}

int main()
{
    int h,w;
    rectangle obj;
     rectangle1 obj1;
    obj.set(5,6);
    obj1.set(5,9);
    cout<<"area ="<<obj.area()<<endl;
    cout<<"area ="<<obj1.area()<<endl;
     //obj1=obj;
     cout<<"area ="<<obj.area()<<endl;
    cout<<"area ="<<obj1.area()<<endl;

     return 0;

}

