#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    ptr= new int[5];
    ptr[1]=3;
    cout<<ptr[1]<<endl;
      cout<<*(ptr+1)<<endl;
    delete []ptr;

    return 0;
}
