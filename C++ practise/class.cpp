#include<iostream>
using namespace std ;

class rectangle
{

    int hight;
    int width;
public:
    void set(int h,int w);
    int area();
};

int rectangle ::area()
{
    return hight*width;
}
void rectangle ::set(int h, int w)
{
    hight =h;
    width=w;
}
int main()
{
    int  i,j,k;
    rectangle obj;
    obj.set(5,6);
    cout<<"AREA =" <<obj.area()<<endl;
    //cout<<"AREA =" <<obj.result()<<endl;
    return 0;
}

