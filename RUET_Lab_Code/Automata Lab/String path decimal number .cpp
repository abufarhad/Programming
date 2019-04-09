#include<bits/stdc++.h>
using namespace std;
vector<string>path;
int main()
{
    string a,b;
    cout<<"Enter any string"<<endl;
    cin>>a;
    cout<<"Enter any substring"<<endl;
    cin>>b;
//     cout<<"............table.............:\n";
//    cout<<"    |+|    |-|\n";
//    cout<<"_________________________\n";
//    cout<<"   |0| |1|  |2|  |3|  |4| |5|  |6| |7|    |8| |9| \n";
//    cout<<"q0->|q1|    |q2|\n";
//    cout<<"q2->|q3|    |q2|\n";
//    cout<<"q3->|q3|    |q3|\n";
printf("\n");
  if(a.find(b)>=0 and a.find(b)<=a.size())
  {
      cout<<"Accepted\n";
      path.push_back("q0");
      string state="q0";
  //    int c=std::stoi(a);
      for(int i=0;i<a.size();i++)
      {
         if(state=="q0" and a[i]=='+')
             path.push_back("q0");
        else if(state=="q0" && a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'|| a[i]=='9')
         {
              path.push_back("q1");
              state="q1";
         }
        else  if(state=="q1" and a[i]=='.'){
             path.push_back("q2");
             state="q2";}

      else  if(state=="q2" && a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'|| a[i]=='9')
        {
             path.push_back("q3");
             state="q3";
        }
       else if(state=="q3"){
             path.push_back("q3"); }
      }
      cout<<"Path:\n";
      cout<<path[0];
      for(int i=1;i<path.size();i++)
        cout<<"->"<<path[i];
         cout<<"->q5"<<endl;
  }

  else cout<<"Rejected";
}
