#include<iostream>
using namespace std;

class A{
//
 int n;
//protected : int x,y;
public:
void get(){ cin>>n;}

bool operator >= ( A ob )
{
    return(n>=ob.n);
}
A operator + ( A &a){
A t;
t.n=n+a.n;
return t;
}
//A operator - ( A &a){
//A t;
//t.n=n-a.n;
//return t;
//}

void d(){ cout<<n;}
};
int main(){
A a1,a2,a3;
a1.get(); a2.get();
a3=a1+a2;
cout<<"Addition of two number"<<endl;
a3.d();
//cout<<endl<<"subtraction of two number"<<endl;
//a3=a1-a2;
//a3.d();
if(a1>=a2){ cout<<"f";}else cout<<"t";
}
