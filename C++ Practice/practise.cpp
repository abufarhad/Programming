#include<iostream>
using namespace std;
class rectangle
{
    int higth;
    int width;
public:
    int area();
    void set(int h,int w);
    rectangle(int h,int w);
    ~rectangle();
};
int rectangle ::area()
{
    return higth*width;
}
rectangle::rectangle(int h,int w)
{
    higth=h;
    width=w;
     cout<<"constractor"<<area()<<endl;
}
rectangle::~rectangle()
{

     cout<<"distractor"<<area()<<endl;
}
int main()
{
    rectangle obj(5,6),obj1(3,2),ob2(3,4);

    //cout<<"AREA ="<<obj.area()<<endl;
    return 0;
}
