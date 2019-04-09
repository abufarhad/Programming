#include<bits/stdc++.h>
using namespace std;
int main() {
   int i,j;
  cin>>i;
  if(i%2==1){ printf("Weird"); return 0;}
  if(i%2==0&&i>=2&&i<=5){ printf("Not Weird"); return 0;}
    if(i%2==0&&i>=6&&i<=20){ printf("Weird"); return 0;}
      if(i%2==0&&i>20){ printf("Not Weird"); return 0;}
return 0;
}

