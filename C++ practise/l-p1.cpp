#include<bits/stdc++.h>
using namespace std;
 class player {
 string name;
 int id,n_o_m,run; float avg;
 public:
     player( ) { run=0; avg=0; n_o_m=0; }
    // player(int t_m,int t_r){  run=t_r; n_o_m=t_m;}
     void getdata( ){
     cout<<"Enter player name  :  ";  cin>>name;
     cout<<"Enter player id  :  "; cin>>id;
     cout<<"Enter total run : ";cin>>run;
     cout<<"Enter number of match  :  "; cin>>n_o_m;
     }
   float cal( ){
     avg=(float)run/n_o_m; return avg;
     }
     void  show(){ cout<<"Avarage="<<avg<<endl;}
     string n( ){ return  player::name;}

     bool operator >( player p){
      if(avg>p.avg)  return true;
       else false;
      }
 };
 int main(){
 player p1,p2;
 p1.getdata();
 p1.cal();  p1.show();
 p2.getdata();
 p2.cal();  p2.show();
 if(p1>p2){
     cout<<"Best player is : "<<p1.n();
 }
 return 0;
 }
