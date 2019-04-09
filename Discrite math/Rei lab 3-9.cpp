#include<bits/stdc++.h>
using namespace std;
  long long  int n,m,b,cnt=0,i;
void linear();
void binary();

int main(){

    printf("Enter 1 if linear search 2 if binary search \n");
    cin>>b;
    switch(b){
    case 1:linear(); break;
    case 2:binary();break;
   // default: ;
    }return 0;}

void linear(){
    printf("Enter number of element \n");
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){  cin>>a[i]; }
     printf("Enter the element you want to search : \n");
    cin>>m;
     for(i=0;i<n;i++){
    if(a[i]==m){ cout<<"position found at "<<i+1<<" number position"<<endl; break;}
    else cnt++;}
    if(cnt==m){ cout<<"not found"<<endl;}
    }


void binary(){
int i,u,num,c=0,l,n,mid;
   printf("Enter element number :");
 scanf("%d",&n);
 int a[n];
 printf("Enter elements :");
 for(i=0;i<n;i++)
{  scanf("%d",&a[i]); }
 printf("Enter number you want to find :\n");
 scanf("%d",&num);
 l=0;u=n-1;
 while(l<=u)
 {
     mid=(l+u)/2;
     if(num==a[mid])
     {
        c=1;break;
         }
     else if(num<a[mid])
     {
         u=mid-1;
     }
     else
         l=mid+1;
     }
     if(c==0)
        printf("........ Not Found....... ");
     else
     printf("%d is........found.......at %d position\n",num,mid+1);
}
