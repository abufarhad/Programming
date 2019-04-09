#include<bits/stdc++.h>
using namespace std;
#define pb push_back
vector<int >a[100],b[100];

int main()
{
    int state,val,i,j;
    string m;
     cout<<"enter num of state:\n";
     cin>>state;
     for(i=0;i<state;i++)
     {
          printf("for state %d enter:\n",i+1);
          printf("Enter going state for 0:\n");
          cin>>val;
        // freopen("input.txt","r",stdin);
          a[i].pb(val);
          printf("Enter going state for 1:\n ");
          cin>>val;
          b[i].pb(val);
     }

for(i=0;i<state;i++){
    for(j=i+1;j<state;j++){
        m=a[i]+a[j];
    }
}



}
