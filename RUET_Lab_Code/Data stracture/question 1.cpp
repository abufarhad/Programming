#include<iostream>
using namespace std;

class student{
string name;
int id,year,semister;
int num[5],grd[5];
float avg;
public:
    int P=6,A=5,B=4,C=3,D=2,F=0;
    int i;
    void get_data()
{
         cout<<"Enter name"<<endl<<"Enter id "<<endl<<"Enter year"<<endl<<"Enter semister "<<endl;
          cin>>name>>id>>year>>semister;
         cout<<"Enter number "<<endl;
         for(i=0;i<5;i++)
            cin>>num[i];
    }
float cal_grade(){
    int a,sum=0;
         cout<<name<<endl;
     for(i=0;i<5;i++){
    a=num[i]/10;
switch (a){
case 10:
case 9:
    cout<<"P"<<endl;  sum=sum+6;break;
case 8:
    cout<<"A"<<endl; sum=sum+5;break;
case 7:
    cout<<"B"<<endl;sum=sum+4;break;
case 6:
    cout<<"C"<<endl; sum=sum+3;break;
case 5:
    cout<<"D"<<endl;sum=sum+2;break;
case 4:
    cout<<"F"<<endl;sum=sum+0;
}
avg=float(sum)/5;
}}
void showdata( ){
  for(i=0;i<5;i++){
        //cout<<num[i]<<"  "<<endl;  }
     //cout<<"Avarage "<<avg<<endl;
}
//bool operator >= ( student ob )
//{
//    return(avg>=ob.avg);
}
};
int main()
{
    student s1,s2;
    s1.get_data();
    s1.cal_grade();
    s1.showdata();
    s2.get_data();
    s2.cal_grade();
    s2.showdata();
//    if(s1 >= s2)
//        cout<<"student-1 is better than student-2";
//    else
//        cout<<"student-2 is better than student-1";
    return 0;
}

