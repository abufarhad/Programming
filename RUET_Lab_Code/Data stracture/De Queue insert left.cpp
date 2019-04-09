#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int dq[10],Left=1,Right=1,n=10;
int main()
{
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
            if(Left==0)
            {
                Left=1;Right=1;
            }
            else if(Left==1)
                Left=n;
            else
                Left-=1;
            dq[Left-1]=x;
        }
    }
    return 0;
}

