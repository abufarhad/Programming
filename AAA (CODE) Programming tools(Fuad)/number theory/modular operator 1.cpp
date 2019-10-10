#include<iostream>
using namespace std;

int main()
{

//    int num,div;
//
//    cin>>num;
//    cin>>div;
//
//    int a,b;
//
//    a=num/2;
//    b=num-a;
//
//    cout<<((a%div)+(b%div))%div;







    int fact=1;
    int num;int div;
    cout<<"input any number :";
    cin>>num;
    cout<<"number by which u want to divide : ";
    cin>>div;

    for(int i=1;i<=num;i++)
        fact=((fact%div)*(i*div))%div;

    cout<<fact<<endl;

    return 0;
}
