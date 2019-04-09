#include<bits/stdc++.h>
using namespace std;
vector<string>path;
int main()
{
    string a;
    cout<<"Enter any string"<<endl;
    cin>>a;
//    cout<<"............table.............:\n";
//    cout<<"    |0 |    |1 |\n";
//    cout<<"_________________________\n";
//    cout<<"q0->|q0|    |q2|\n";
//    cout<<"q2->|q3|    |q2|\n";
//    cout<<"q3->|q3|    |q3|\n"
printf("\n");
  if(a.find("10")>=0 and a.find("10")<=a.size())
  {
      cout<<"Accepted\n";
      path.push_back("q0");
      string state="q0";
      for(int i=0;i<a.size();i++)
      {
         if(state=="q0" and a[i]=='0')
             path.push_back("q0");
        else if(state=="q0" and a[i]=='1')
         {
              path.push_back("q2");
              state="q2";
         }
        else  if(state=="q2" and a[i]=='1')
             path.push_back("q2");
      else  if(state=="q2" and a[i]=='0'){
             path.push_back("q3");
             state="q3";
        }
       else if(state=="q3")
             path.push_back("q3");
      }
      cout<<"Path:\n";
      cout<<path[0];
      for(int i=1;i<path.size();i++)
        cout<<"->"<<path[i];
  }
  else cout<<"Rejected";
}
