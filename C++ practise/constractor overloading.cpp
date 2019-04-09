#include<iostream>
using namespace std;
    class abc{
        int a;
    public:
      abc(int x){a=x;}
     int ret(){return a;}
    };
    int main(){
        abc ob(5);
        cout<<ob.ret()<<endl;
        return 0;
    }




