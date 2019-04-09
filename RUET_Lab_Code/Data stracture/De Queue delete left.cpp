#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int dq[]={1,2,3,4,5,6,7,8,9,10};
int Left=5,Right=8,n=10;
int main()
{
    int x;
    while(1)
    {
        if(Left==0)
        {
            cout<<"Underflow"<<endl;
            return 0;
        }
       x=dq[Left-1];
       cout<<x<<endl;
       if(Right==Left)
       {
           Left=0; Right=0;
       }
       else if(Left==n)
        Left=1;
       else
        Left+=1;
    }
    return 0;
}


