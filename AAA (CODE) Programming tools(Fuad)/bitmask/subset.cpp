#include<bits/stdc++.h>
using namespace std;

void subset(string str)
{
    int len=str.length();

    int range=(1<<len)-1;


    for(int i=0;i<=range;i++)
    {

        int tem=i;
        int k=0;
        while(tem>0)
        {
            if(tem&1==1)
            {
                cout<<str[k]<<" ";
            }
            k++;
            tem=tem>>1;
        }
        cout<<endl;

    }

}


int main()
{
    //cout<<(1<<3)<<endl;
    string str;
    cin>>str;

    subset(str);
    return 0;
}
