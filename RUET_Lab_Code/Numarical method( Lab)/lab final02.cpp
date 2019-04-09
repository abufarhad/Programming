#include<iostream>
#define max 20
using namespace std;
int main()  {
int i,j,n;
double xx,x[max],y[max],store,sum = 0;
cout<<"How many values: ";   cin>>n;
cout<<"Enter value of x and y ...\n";
for(i=1; i<=n; i++){
cout<<"\nx["<<i<<"] : ";   cin>>x[i];
cout<<"y["<<i<<"] : ";   cin>>y[i]; }
cout<<"\nTake value of x for determination: ";
cin>>xx;
for(i=1; i<=n; i++){     store = 1;
for(j=1; j<=n; j++){
if(j != i){
store = store * ((xx - x[j]) / (x[i] - x[j]));   }}
sum = sum + (store * y[i]);  }
cout<<"\n\nResult: "<<sum<<endl;  }
