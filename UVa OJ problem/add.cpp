#include <iostream >
using namespace std;
class farhad
{
    int a,b,sum;
   public:
     void set( ){
         cout<<"Enter first number ";  cin>>a;
         cout<<"Enter second number"; cin>>b;
     }
       void add( ){
     sum=a+b;
       }
       void showdata(){
       cout<<sum;
       }
};
int main()
{
    farhad a1,a2;
   a1.set();
   a1.add();
   a1.showdata();
   return 0;}

