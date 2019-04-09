#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

class player
{
protected:
    string name;
    int id;
public:
    virtual void input(){cout<<"\nEnter the player name :- ";cin>>name;
    cout<< "\nPlayer ID :- "; cin>>id;}
    virtual void show()
    {
        cout<<setw(8)<<name;
    }

};
class cricket_player : public player
{
    protected:
    string role;
    int t_run, t_match, n_match;
    float batavg;
public:
    cricket_player(){batavg=0;}
    void input(){
        player::input();
        cout<< "\nPlayer role :- "; cin>>role;
     cout<< "\nTotal runs:- "; cin>>t_run;
     cout<< "\nTotal match played :- "; cin>>t_match;
     cout<< "\nNo. of not out match :- "; cin>>n_match;
      }
      float cal()
      {
          batavg=(float)t_run/(t_match-n_match);
          return batavg;
      }
      int tmatch(){return t_match;}
      float bat_avg(){return batavg;}
      string n(){return player::name;}
    void show(){
    player::show();
    cout<<setw(19)<<batavg;
    cout<<endl;
    }
    bool operator < (cricket_player p)
    {
        if(batavg<p.batavg)
            return true;
        else
            return false;
    }

};

class football_player : public player
{
    protected:
    string role;
    int tp_match, t_goal;
    float avg;
public:
    football_player(){avg=0;}
    void input(){
        player::input();
        cout<< "\nPlayer role :- "; cin>>role;
     cout<< "\nTotal match played :- "; cin>>tp_match;
     cout<< "\nTotal no. of goal :- "; cin>>t_goal;
      }
      float cal()
      {
          avg=(float)t_goal/tp_match;
          return avg;
      }
      int tpmatch()
      {
          return tp_match;
      }
      float pavg(){return avg;}
      string n(){return player::name;}
    void show(){
    player::show();
    cout<<setw(19)<<avg;
    cout<<endl;
    }
    bool operator < (football_player p)
    {
        if(avg<p.avg)
            return true;
        else
            return false;
    }

};
class payment : public cricket_player, public football_player{
    float player_payment;
    int match; float avrg;
public:
    void getdata(int t, float a)
    {
        match=t; avrg=a;
    }
    void calc()
    {
        if(match>=10&&avrg>=30)
            {player_payment=(float)(avrg*300); cout<<player_payment<<endl;}
        else
            if(match<10||avrg<30)
               {player_payment=(float)(avrg*100); cout<<player_payment;}
    }
    void calf()
    {
        if(match>=10&&avrg>=3)
            {player_payment=(float)(avrg*300); cout<<player_payment<<endl;}
        else
            if(match<10||avrg<3)
               {player_payment=(float)(avrg*100); cout<<player_payment;}
    }
    float pay(){return player_payment;}
    string nz(){return cricket_player::n();}
    string nx(){return football_player::n();}
  friend bool operator >(payment,payment);
//    {
//        if(player_payment<p.player_payment)
//            return true;
//        else
//            return false;
//    }

};

bool operator > (payment a, payment b)
{
        if(a.player_payment>b.player_payment)
            return true;
        else
            return false;
}


int main()
{
    //reopen("input.txt","r",stdin);
    //freopen("output","w",stdout);
 int n,i;
    cout<< "----------------------CRICKET--------------------------------------";
    cout<< "\nEnter the number of player:-"; cin>>n;
    cricket_player p[n],a;
    payment c[n],m;
    for(i=0;i<n;i++)
    {
        printf( "\nEnter the information of %dNo. player -",i+1);
        p[i].input();
        p[i].cal();

    }
     cout<< "\n\n------Average output---------\n\n";
    cout<<setw(8)<<"Name"<<setw(18)<<"Rating"<<"\n"<<endl;
    for(i=0;i<n;i++)
    {
        p[i].show();
    }

    a=p[0];

        for(int k=1;k<n;k++)
    {
        if(a<p[k])
            a=p[k];
    }

    cout<< "\n\n------Cricket's best player output--------";
    cout<< "\nBest player is:- ";
    cout<< "\nName= "<<a.n();
    cout<< "\nBat avg= "<<a.bat_avg();
    for(i=0;i<n;i++)
    {

        c[i].getdata(p[i].tmatch(),p[i].bat_avg());
        printf("\n%dno. player payment is: ",i+1);
        c[i].calc();
    }
        m=c[0];
    for(int k=1;k<n;k++)
    {
        if(c[k]>m)
            m=c[k];
    }

    cout<<"\n\n"<<"Highest Payment player is="<<endl;
    cout<<"Name= "<<m.nz()<<endl;
    cout<<"Payment= "<<m.pay();

    cout<< "\n\n----------------------FOOTBALL---------------------------------";
     cout<< "\nEnter the number of player:-"; cin>>n;
    football_player f[n],b;
    payment fp[n];
    for(i=0;i<n;i++)
    {
        printf( "\nEnter the information of %dNo. player ----",i+1);
        f[i].input();
        f[i].cal();
    }
     cout<< "\n\n------Average output---------\n\n";
    cout<<setw(8)<<"Name"<<setw(20)<<"Rating"<<"\n"<<endl;
    for(i=0;i<n;i++)
    {
        f[i].show();
    }

        b=f[0];

        for(int k=1;k<n;k++)
    {
        if(b<f[k])
        {
            b=f[k];
        }
    }
    cout<< "\n\n------Football's best player output----------";
    cout<< "\nBest player is:- ";
    cout<< "\nName= "<<b.n();
    cout<< "\nGoal average= "<<b.pavg();

        for(i=0;i<n;i++)
    {

        fp[i].getdata(f[i].tpmatch(),f[i].pavg());
        printf("\n%dno. player payment is: ",i+1);
        fp[i].calc();
    }
        m=fp[0];
    for(int k=1;k<n;k++)
    {
        if(fp[k]>m)
            m=fp[k];
    }
      cout<<"\n\n"<<"Highest Payment player is="<<endl;
    cout<<"Name= "<<m.nx()<<endl;
    cout<<"Payment= "<<m.pay();

    return 0;
}
