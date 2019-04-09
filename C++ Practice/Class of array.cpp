#include<iostream>
using namespace std;

class rectangle
{
    int higth;
    int width;
public:
    void set(int h,int w);
    int area();

};
inline int rectangle::area()
{
    return higth*width;
}
void rectangle::set(int h,int w)
{
    higth=h;
    width=w;
}

int main()
{
    rectangle obj[5];
    obj[0].set(5,6);
    obj[1].set(3,6);
    obj[2].set(4,6);
    obj[3].set(6,6);
    obj[4].set(7,6);
    for(int i=0;i<5;i++){
    cout<<"Area ="<<obj[i].area()<<endl;}
    return 0;
}
