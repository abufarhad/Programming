#include<bits/stdc++.h>
using namespace std;

void increament(int &x){

    x++;
}

void arrpass(int ar[]){

    ar[0]=5;
}
int arr[10];
int main()
{
    int p=10;


    arr[0]=1;
    arr[1]=2;
    arr[2]=3;
    arr[3]=4;
    arr[4]=5;

    int *pt;

    pt=&arr[1];

    for(int i=1;i<=5;i++){
        cout<<*pt<<endl;
        *pt++;
    }


//    arrpass(arr);
//    cout<<arr[0]<<endl;
//
//    increament(p);
//
//    //cout<<p<<endl;
    return 0;
}
