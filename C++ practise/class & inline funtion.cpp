 #include<iostream>
using namespace std;


class rectangle {
    int higth ;
    int width;
public:
    void set(int h,int w);
    int area();
    rectangle();
//    ~rectangle();
};

 inline int rectangle ::area()
{
    return higth * width;
}

// rectangle::rectangle()
//{
//    higth=0;
//    width=0;
//    cout<<"Constrctor"<<endl;
//}
// rectangle::~rectangle()
//{
//    higth=0;
//    width=0;
//    cout<<"Distrctor"<<endl;
//}
void rectangle::set(int h,int w)
{
    higth=h;
    width=w;
}

int main()
{
  rectangle obj;
  obj.set(5,6);
  cout <<"Area="<<obj.area()<<endl;

  return 0;
}
