#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int Queue[]={1,2,3,4,5,6,7,8,9,10};
int n=10,Front=1,rear=10;
int main()
{
    int x;
    while(1)
    {
        if(Front==0)
        {
            cout<<"underflow"<<endl;
            return 0;
        }
        else
        {
            x=Queue[Front-1];
            cout<<x<<endl;
            if(Front==rear)
            {
                Front=0; rear=0;
            }
            else if(Front==n)
                Front=1;
            else
                Front+=1;
    }
    }
    return 0;
}


