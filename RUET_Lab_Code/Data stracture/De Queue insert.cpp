#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int dq[10],Left=0,Right=0,n=10;
    int x;
    while(1)
    {
        cin>>x;
        if((Left==1 && Right==n)||(Left==Right+1))
        {
            cout<<"Overflow";
            return 0;
        }
        else
        {
            if(Right==0)
            {
                Left=1;Right=1;
            }
            else if(Right==n)
                Right=1;
            else
                Right+=1;
            dq[Right-1]=x;
        }
    }
    return 0;
}
