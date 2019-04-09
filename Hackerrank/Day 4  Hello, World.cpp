#include<bits/stdc++.h>
using namespace std;
int main() {
   int i,j,t;
   cin>>t;
   while(t--){
  cin>>i;
  if(i<0){ printf("Age is not valid, setting age to 0.\n"); }
  if(i>13){ printf("Age is not valid, setting age to 0.\n"); }
  if(i%2==0&&i>=2&&i<=5){ printf("Not Weird"); return 0;}
    if(i%2==0&&i>=6&&i<=20){ printf("Weird"); return 0;}
      if(i%2==0&&i>20){ printf("Not Weird"); return 0;}
   }
return 0;
}


