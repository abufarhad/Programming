#include<iostream>
using namespace std;
int main()
{
    class counter
    {
        int count;
    public:
        counter ( ){ count=0;}
      //  void in_count( ){ count++;}
        int get_count(){ return count;}
        void oparetor  ++ ( ){ count++;}
    };
    //void counter ::get_count()
void  main(){
counter c1,c2;
 cout<<"C1="<<c1.get_count<<endl;
cout<<"C2="<<c2.get_count<<endl;
c1++;
c2++;
++c2;
cout<<"C1="<<c1.get_count<<endl;
cout<<"C2="<<c2.get_count<<endl;
}
