#include<iostream>
using namespace std;

int add(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}
int main()
{
    int a,b;
    a=5,b=6;
    cout <<add(a,b)<<endl;
    return 0;
}
