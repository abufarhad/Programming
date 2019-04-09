#include<bits/stdc++.h>
using namespace std;
vector<long long int >a;
int main(){
long long i,j,b,n,num;

srand(time(NULL));
for(i=0;i<5000;i++){
   int m=rand();
   a.push_back(m);
}
//freopen("output_Binary.txt","w",stdout);
sort(a.begin(),a.end());
for(i=0;i<5000;i++){
        cout<<a[i]<<"   ";
      //// freopen("output_Binary.txt","w",stdout);
}

cout<<endl;
//freopen("intput_Binary.txt","r",stdin);
cout<<"Enter number you want to search  :  "<<endl;
scanf("%d",&num);

//freopen("intput_Binary.txt","r",stdin);

long long  begin=0, end=a.size()-1, l=begin, u=end,mid,c=0;

cout<<a[mid]<<endl<<endl;

 while(l<=u)
 {
     if(num==a[mid]){
     mid=(l+u)/2;
     {
        c=1;break;
         }}
     else if(num<a[mid])
     {
         u=mid-1;
     }
     else
         l=mid+1;
     }
     freopen("fulloutput_Binary.txt","w",stdout);
     if(num==a[l]){ int loc=l+1; cout<<"found at "<<loc << " position"<<endl;}
     else printf("........ Not Found.......\n ");

return 0;
////}
///Using STL for Binary Search
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//void show(int a[], int arraysize)
//{
//    for(int i = 0; i < arraysize; ++i)
//        cout << '\t' << a[i];
//}
//
//
//int main()
//{
//    int a[]= {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
//    int asize = sizeof(a) / sizeof(a[0]);
//    cout << "\n The array is : ";
//    show(a, asize);
//
//    cout << "\n\nLet's say we want to search for 2 in the array";
//    cout << "\n So, we first sort the array";
//    sort(a, a + 10);
//    cout << "\n\n The array after sorting is : ";
//    show(a, asize);
//    cout << "\n\nNow, we do the binary search";
//    if (binary_search(a, a + 10, 2))
//       cout << "\nElement found in the array";
//    else
//       cout << "\nElement not found in the array";
//
//    cout << "\n\nNow, say we want to search for 10";
//     if (binary_search(a, a + 10, 10))
//       cout << "\nElement found in the array";
//    else
//       cout << "\nElement not found in the array";
//
//    return 0;
//
//}
//
