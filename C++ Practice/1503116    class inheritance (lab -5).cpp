#include<bits/stdc++.h>
using namespace std;
class player
{
protected:
    string name ;
    int id;

    void intput( )
    {
        cout<<"Enter player name"<<endl;
        cin>>name;
        cout<<"Enter player id"<<endl;
        cin>> id;
    }
    void showdata ()
    {
        cout<<"player name:" <<name<<endl;
        cout<<"player id:" <<id<<endl;
        cout<<"The average of the player is: ";
    }
};
class cricket_player :virtual public player
{
   string role;
    int t_run,t_match,n_match;
    float batavg;
    cricket_player()
    {
        batavg=0;
    }
    void input()
    {
        player ::intput();
        cout<<"Enter player role:-"<<endl;
        cin>>role;
        cout<<"Total run :-"<<endl;
        cin>>t_run;
        cout<<"Total match :-"<<endl;
        cin>>t_match;
        cout<<"Number of match:-"<<endl;
        cin>>n_match;
    }
    float cal()
    {
        batavg=(float)t_run/(t_match-n_match);
        return batavg;
    }
    float bat_avg()
    {
        return batavg;
    }
    void show()
    {
        player::showdata();
        cout<<batavg<<endl;
    }
    friend class payment;
};
class football_player :  virtual public player
{
    string role;
    int t_match,t_goal;
    float avg;
    football_player()
    {
        avg=0;
    }
    void input()
    {
        player ::intput();
        cout<<"Enter player role:-"<<endl;
        cin>>role;
        cout<<"Total match :-"<<endl;
        cin>>t_match;
        cout<<"Total gole :-"<<endl;
        cin>>t_goal;
    }
    float cal()
    {
        avg=float(t_goal)/(t_match);
        return avg;
    }
//    float pavg()
//    {
//        return avg;
//    }
    void show()
    {
        player::showdata();
        cout<<avg<<endl;
    }
    friend class payment;
};
class payment:public cricket_player,public football_player{
    float pay_ment;
    public:
    float pay_c( ){
    cricket_player::show();
    if((batavg>=30)&&(n_match>=10)){
        pay_ment=batavg*400;
        return pay_ment;}

     if((batavg<30)&&(n_match<10)){
        pay_ment=batavg*100;
        return pay_ment;}
    }
    void pay_f(){
    football_player::show();
    if((avg>=30)&&(n_match>=10)){
        pay_ment=avg*400;}

     if((avg<30)&&(n_match<10)){
        pay_ment=avg*100;}
    }
    void pay_show_c(){ cout<<pay_c()<<endl;}
//    void pay_show_f(){ cout<<pay_f()<<endl;}
//void pay_show_f(){cout<<pay_ment<<endl;}
};
int main()
{    int n,i;
   // cricket_player  a;
    payment p;
    p.pay_show_c();
    cout<<p.pay_show_c()<<endl;
  // cout<<p.pay_show_c()<<endl;
//    football_player f[n], b;
//    b.show();
//    cout<<"Goal average="<< b.pavg();
    return 0;
}
