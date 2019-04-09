#include<iostream>
using namespace std;
class b{
public:
void print(){ cout<<"BASE";};
};
class d:public b{
    public:
void print(){ cout<<"Derive";}
};
 int main()
{
d ob;
 ob.print();
}
