#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()  {
  int num,n;
cin>>n;
  while(n--){
        int count=0;
  scanf("%d",&num); // if(num==0){count=1;}
   while(num!=0){
     num=num/10;
     count++;   }
 printf("%d",count);}
  return 0;}
