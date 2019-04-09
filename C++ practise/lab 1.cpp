#include<iostream>
using namespace std;
class player{
private:
    string name,id;
   float avarage;
    int run;
    int match;
public:
    player(){
    run=0;
    match=0;
    avarage=0;
    };
    player(int totalrun,int totalmatch){
       run=totalrun;
       match= totalmatch;
    }
    void getdata()
    {
        cin>>name>>id;


    }
    void cal(player a,player b){
        float c=a.run/a.match;
        cout<<a.name<<" "<<a.id<<" ="<<c;
        float d=b.run/b.match;
        cout<<a.name<<" "<<a.id<<" ="<<d;
    }
};
int main()
{
   player a(200,5),b(300,7),c;
   a.getdata();
   b.getdata();
   a.cal(a);
}
