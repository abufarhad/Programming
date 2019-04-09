#include<iostream>

using namespace std;

int main()
{
    string a;
    while(getline(cin,a))
    {
        int counter[130];
        for(int i=0;i<=128;i++)
            counter[i]=0;

        int len=a.length();
        for(int i=0;i<len;i++)
            counter[a[i]]++;
        for(int i=33;i<=128;i++)
        {
            if(counter[i]!=0)
                cout<<i<<" "<<counter[i]<<endl;
        }
        cout<<endl;
    }

    return 0;

}
