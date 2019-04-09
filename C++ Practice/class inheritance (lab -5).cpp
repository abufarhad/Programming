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
class cricket_player : public player
{
    string role;
    int t_run,t_match,n_match;
    float batavg;
public:
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
    string n( )
    {
        return player::name;
    }
    void show()
    {
        player::showdata();
        cout<<batavg<<endl;
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
    string role;
    int t_match,t_goal;
    float avg;
public:
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
    float pavg()
    {
        return avg;
    }
    string n( )
    {
        return player::name;
    }
    void show()
    {
        player::showdata();
        cout<<avg<<endl;
    }
    bool operator < (football_player p)
    {
        if(avg<p.avg)
            return true;
        else
            return false;
    }
};
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output","w",stdout);
    int n,i;
    cout<<"Enter the number of player "<<endl;
    cin>>n;
    cricket_player p[n], a;
    for(i=0; i<n; i++)
    {
        printf("Enter the information of %d  cricket number of player\n",i+1);
        p[i].input();
        p[i].cal();
        p[i].show();
    }
    a=p[0];
    for(int k=1; k<n; k++)
    {
        if(a<p[k])
        {
            a=p[k];
        }
    }
    cout<<"Best player is:-"<<a.n()<<endl;
    cout<<"Bat average="<< a.bat_avg()<<endl;

    football_player f[n], b;
    for(i=0; i<n; i++)
    {
        printf("Enter the information of %d number football  player\n",i+1);
        f[i].input();
        f[i].cal();
        f[i].show();
    }
    b=f[0];
    for(int k=1; k<n; k++)
    {
        if(b<f[k])
        {
            b=f[k];
        }
    }
    cout<<"Best player is:-"<<b.n()<<endl;
    cout<<"Goal average="<< b.pavg();
    return 0;
}
