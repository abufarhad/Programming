#include<bits/stdc++.h>
#define pb push_back
using namespace std;
vector<int> ar[10],br[10];
map<int, map< int,map<int,string > > >r;
string a;
string fun(int i, int j,int k)
{
     a.clear();
     a+='(';
      a+=r[i][j][k-1];
      a+=')';
    a+='+';
    a+='(';
      a+=r[i][k-1][k-1];
      a+=')';

 a+='(';
      a+=r[k-1][k-1][k-1];
      a+=')';
      a+='*';
     a+='(';
      a+=r[k-1][j][k-1];
      a+=')';
      return a;
}
string simpli(string a)
{
	string b,c;
	b.clear();
	int in;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]==')')
			{
				b+=a[i];
				in=i;
				break;
			}
		b+=a[i];
	}
for(int i=in+1;i<a.size();i++)
	c+=a[i];
if(c.find("NULL")>=0 and c.find("NULL")< c.size())
	return b;
return a;
}
string simpli2(string a,int i,int j)
{
if(a.find("NULL")>=0 and a.find("NULL")< a.size())
	return r[i][j][1];
return a;
}
int main()
{
     int state,val,i,j;
     cout<<"enter num of state:\n";
     cin>>state;
     for(i=0;i<state;i++)
     {
          printf("for state %d enter:\n",i+1);
          printf("Enter going state for 0:\n");
          cin>>val;
          ar[i].pb(val);
          printf("Enter going state for 1:\n ");
          cin>>val;
          br[i].pb(val);
     }
     for( i=0;i<state;i++)
     {
          for( j=0;j<state;j++)
          {
               a.clear();
               if(i==j){
               string a="e";
               for(int k=0;k<ar[i].size();k++)
               {
                    if(ar[i][k]==i+1){
                               a+='+';
                         a+='0';
                    }
               }
               for(int k=0;k<br[i].size();k++)
               {
                    if(br[i][k]==i+1){
                         a+='+';
                         a+='1';
                    }
               }
               r[i][j][0]=a;
               }
               else{
                    a.clear();
               for(int k=0;k<ar[i].size();k++)
               {
                    if(ar[i][k]==j+1){
                         a+='0';
                    }
               }
                for(int k=0;k<br[i].size();k++)
               {
                    if(br[i][k]==j+1){
                         a+='1';
                    }
               }
               if(a.size()==0)
                    a="NULL";
               r[i][j][0]=a;
               }
          }
     }
     cout<<"Table for R(0)\n";
     for(int i=0;i<state;i++)
     {
          for(int j=0;j<state;j++){
                    printf("R%d%d        ",i+1,j+1);
               cout<<r[i][j][0]<<'\n';
          }
     }
   cout<<"Table for R(1)\n";
     for(int i=0;i<state;i++)
     {
          for(int j=0;j<state;j++){
                    printf("R%d%d        ",i+1,j+1);
                    r[i][j][1]=simpli(fun(i,j,1));
               cout<<r[i][j][1]<<'\n';
          }
     }
     cout<<"Table for R(2)\n";
       for(int i=0;i<state;i++)
     {
          for(int j=0;j<state;j++){
                    printf("R%d%d        ",i+1,j+1);
                    r[i][j][2]=simpli2((fun(i,j,2)),i,j);
               cout<<r[i][j][2]<<'\n';
          }
     }
}
