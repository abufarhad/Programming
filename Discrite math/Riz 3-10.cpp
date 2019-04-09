#include<bits/stdc++.h>
using namespace std;
  long long  int n,m,b,cnt=0,i;
void bubble();
void insertion();

int main(){

    printf("Enter 1 if linear search 2 if binary search \n");
    cin>>b;
    switch(b){
    case 1:bubble(); break;
    case 2:insertion();break;
   // default: ;
    }return 0;}

void bubble(){
     int n,i,j;   double a[100],t=0;
       printf("Enter number of element \n");
    scanf("%d",&n);
    printf("Before sorting");
    for(i=0;i<n;i++){
    scanf("%lf",&a[i]);  }

//int sort(int n,int a[])
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
            t=a[i];
            a[i]=a[j];
            a[j]=t;
            cnt++; }}}
            printf( " After sorting \n");
            for(i=0;i<n;i++){
        cout<<a[i]<<" ";}
printf("Number of comparison : \n");
cout<<cnt;


}

void insertion(){
    int n,i,j;   double a[100],t=0;
    printf("Enter number of element \n");
    scanf("%d",&n);
    printf("Before sorting");
    for(i=0;i<n;i++){
    scanf("%lf",&a[i]);  }
    for(i=1;i<n;i++){
//    d=i;
   // while(d>0 && a[d]<a[d-1]){
    while(i>0 && a[i]<a[i-1]){
        t=a[i];
        a[i]=a[i-1];
        a[i-1]=t;
        i--;
        cnt++;
    }
}
printf("After sorting\n ");
for(i=0;i<n;i++){
        cout<<a[i]<<" ";}
printf("Number of comparison : \n");
cout<<cnt;

}
