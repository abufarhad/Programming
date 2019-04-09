#include<bits/stdc++.h>
using namespace std;
class Player//abstract class
{
protected:
    int id;
    string name;
public:
    Player()
    {
        id=0;
        name="Farhad";
    }
   void Show_Players_Data()
   {
       cout<<"Player's Name: "<<name;
   }
   virtual void get_Data()=0;
};
//inheretence cricketplayer from base class Player
class Cricket_Player:public virtual Player
{
protected:
    int play_role;
    float total_runs;
    int match_played;
    int no_of_not_out_match;
    float bat_avg;
public:
    Cricket_Player()
    {
        play_role=0;total_runs=0;match_played=0;no_of_not_out_match=0;bat_avg=0;
    }
      virtual  void get_Data()
    {
        cout<<"Enter Player's id:"<<endl;
        cin>>id;
        cout<<"Enter Player's Name:"<<endl;
        cin>>name;
        cout<<"Which Type of Player 1 for batsman 2 for bowler 3 for all rounder"<<endl;
        cin>>play_role;
        cout<<"Total Runs:"<<endl;
        cin>>total_runs;
        cout<<"Match Played"<<endl;
        cin>>match_played;
        cout<<"Not out of the match"<<endl;
        cin>>no_of_not_out_match;
    }
    void calculate_average()
    {
        bat_avg=(float)total_runs/(float)(match_played-no_of_not_out_match);
    }
    void Show_Players_Data()
    {
        cout<<"Player's Name: "<<name<<endl;
        cout<<"Player's average: "<<bat_avg<<endl;
    }
int  operator < (Cricket_Player ob2)
{
    if(bat_avg<ob2.bat_avg)
         return 1;
         else
            return 0;
}
};
class football_player:public virtual Player{
protected:
    int total_match;
    int no_of_goal;
    int no_of_saves;
    float rating_point;
public:
    virtual void getdata()
    {
        cout<<"Enter Player name"<<endl;
        cin>>name;
        cout<<"Enter player id"<<endl;
        cin>>id;
        cout<<"Enter match played total"<<endl;
        cin>>total_match;
        cout<<"Enter no. of goal"<<endl;
        cin>>no_of_goal;
        cout<<"Enter no. of saves"<<endl;
        cin>>no_of_saves;
    }
    void caldata()
    {
    rating_point=(float)((no_of_goal*10)+(no_of_saves*7))/total_match;
    }
    void putdata()
    {
    cout<<"Player name:"<<name<<endl;

    cout<<rating_point<<endl;

    }

/*   int operator >(football_player fl)

      {
        if(rating_point>fl.rating_point)

         return 1;

       else

           return 0;

       }*/
};
class Payments:public football_player,public Cricket_Player{
public:
    float payAmount;
public:
    void  getdata()
    {
        cout<<"Enter total match\n";
        cin>>match_played;
        cout<<"Enter batting average\n";
        cin>>bat_avg;
    }
    void paymentMethod()
    {
        if(match_played>=10&&bat_avg>=30)

            {
                payAmount=(bat_avg*300);
                cout<<"total match\n";
                cout<<match_played<<endl;
                cout<<"Payment\n";
                cout<<payAmount<<endl;

            }

            else if(bat_avg<30||match_played<10)
            {
                payAmount=(bat_avg*100);
                cout<<"total match\n";
                cout<<match_played<<endl;
                cout<<"Payment\n";
                cout<<payAmount<<endl;
}
    }
};
int main()
{
  //freopen("Playersinput.txt","r",stdin);
    //freopen("Playersoutput.txt","w",stdout);
   int n;
    cout<<"How many Players"<<endl;
    cin>>n;
    Cricket_Player cricketPlayer[n],bestPlayer,temp;
    int i;
    for(i=0;i<n;i++)
    {
        cricketPlayer[i].get_Data();
        cricketPlayer[i].calculate_average();
    }
    cout<<endl<<endl;
    for(i=0;i<n;i++)
    {
        cricketPlayer[i].Show_Players_Data();
    }
    for(i=0;i<n;i++)
    {
            if(temp<cricketPlayer[i])
        temp=cricketPlayer[i];
    }
    cout<<"best player\n";
    temp.Show_Players_Data();
    Payments *pc=new Payments();
    pc->Payments::getdata();
    pc->paymentMethod();
    pc->football_player:: getdata();
    int l;
   /* cout<<"How many football players"<<endl;
    cin>>l;
    football_player f[l],temp_footballer;
    for(i=0;i<l;i++)
    {
        f[i].getdata();
        f[i].caldata();
    }
   for(i=0;i<l-1;i++)
   {
       if(f[i]>f[i+1])
        temp_footballer=f[i];
   }
   cout<<"All football player's data\n";
   for(i=0;i<l;i++)
   {
       f[i].putdata();
   }
   cout<<"Best Football Player\n";
   temp_footballer.putdata();
*/
    return 0;

}
