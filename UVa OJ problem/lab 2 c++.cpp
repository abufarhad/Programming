 #include<iostream>
using namespace std;


class Player {
    string name;
    string id;
    int run;
    int no_of_matchplayed;
    int object1,Object2;
public:
    Player( ) { }
     Player( int total_runs,int total_match)
     {
         total_runs=run;
         total_match= no_of_matchplayed;
     }

    void get_data( )
    {
        cin>>name;
        cin>>id;
        cin>>run;
        cin>>no_of_matchplayed;
    }
   void calc_average (int run,int no_of_matchplayed )
   {
      return (run/no_of_matchplayed);
   }
};

int main()
{
     Player p1,p2,obj;
     p1.get_data( );
     //p2.get_data();
     //obj.Player(5,500)
    cout <<"Avarege ="<<obj.calc_average()<<endl;

  return 0;
}

