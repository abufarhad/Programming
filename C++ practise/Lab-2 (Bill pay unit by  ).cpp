#include<iostream>
using namespace std;
class bill{
private:
    string name;
    int unit;
    float total_bill;
public:
    void readdata()
    {
        cout<<"enter biller name:";cin>>name;
        cout<<"enter the consume unit:";cin>>unit;
    }
    void tbill()
    {float price,netbill;

     if(unit<=100)
         price=unit*5.14;

     else if(unit>100&&unit<=300)
     price=unit*5.36;

     else if(unit>400)
        price=unit*8.70;

     int service=30,demand=15;
     netbill=price+service+demand;

     total_bill= netbill+ netbill*0.05;
     if(total_bill<100)
        total_bill=100;
     if(total_bill>400)
        total_bill=total_bill+total_bill*.15;
    }

    void showdata(){
        cout<<name;
    cout<<"total bill="<<total_bill<<endl;
    }
};
int main()
{
   bill b1,b2;
   b1.readdata();
   b1.tbill();
   b1.showdata();
   b2.readdata();
   b2.tbill();
   b2.showdata();
    return 0;
}

