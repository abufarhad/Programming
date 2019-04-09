#include <iostream>
#include <string.h>
using namespace std;
class Base{
private:
    int tax;
public:
     Base(int x){tax=x;}
      friend void show(Base);
};
void show(Base c){cout<<"my tax="<<c.tax<<"\n";}

int main(void)
{
   Base b=10.76;
   show(b);
}

