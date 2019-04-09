#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int dq[]={1,2,3,4,5,6,7,8,9,10};
int Left=1,Right=5,n=10;
int main()
{
    int x;
    while(1)
    {
        if(Right==0)
        {
            cout<<"Underflow"<<endl;
            return 0;
        }
       x=dq[Right-1];
       cout<<x<<endl;
       if(Right==Left)
       {
           Left=0; Right=0;
       }
       else if(Right==1)
        Right=n;
       else
        Right-=1;
    }
    return 0;
}

