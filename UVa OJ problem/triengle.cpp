#include<bits/stdc++.h>
using namespace std;
int main(){
    long long i,n,k,j,count=0;
  long long  a[10];
    for(i=0;i<4;i++){
        cin>>a[i];
    }
   sort(a , a + 4 );
	for(int i=0;i<4;i++)
   {  //cout<<a[0]<<endl;
     if((a[0]+a[1]>a[2])||(a[1]+a[2]>a[3])){cout<<"TRIANGLE";break;}
     else if ((a[0]+a[1]==a[2])||(a[1]+a[2]==a[3])){cout<<"SEGMENT";break;}
     else cout<<"IMPOSSIBLE";break;}

   return 0;
}


