#include<iostream>
using namespace std;
class counter
{
    int count;
public:
    counter( ){ count=0;}
    void get( ){ return count;}
    void operator ++ ( ){ count++;}
};
int  main( ){
counter c1,c2;
cout<<"\n c1="<<c1.count();
cout<<"\n c2="<<c2.count();
c1++;
c2++;
++c2;
cout<<"\n c1="<<c1.count();
cout<<"\n c2="<<c2.count();
}

