#include<bits/stdc++.h>
using namespace std;
string A="I have eaten rice at breakfast8 But the truth is you don't know me that's the problem";
int ws;
int main()
{
    int ws;
    cin>>ws;
    int c=0,sz=A.size();
    for(int i=0;i<sz;)
    {
        int j=i,c=ws;
        while(c--&&j<sz)
        {
            j++;
        }
        if(j!=sz&&A[j]!=' ')
        {
            while(A[j]!=' ')j--;
        }

        for(int k=i;k<j;k++)cout<<A[k];
        cout<<"\n";
        i=j+1;
    }

}
