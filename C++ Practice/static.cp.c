#include<iostream>
using namespace std;
class A
{
int p;
static int q;
public:
A();
void incr(void);
void display(void);
};
A :: A()
{
p=5;
}
int A:: q=10;
void A:: incr()
{
p++;
q++;
}
void A:: display()
{
cout<<p<<”\t”<<q<<endl;
}
void main()
