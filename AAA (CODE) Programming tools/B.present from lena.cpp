#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int gap=n,inc=0,i,g;                 ///before middle line
    for(i=0;i<n;i++){
        for(g=0;g<gap;g++)cout<<"  ";

        for(g=0;g<=inc;g++)
        {
            if(g<inc)
                cout<<g<<" ";
            else
                cout<<g;
        }
        for(g=inc-1;g>=0;g--)
        {
                cout<<" "<<g;
        }
        cout<<endl;
        gap--;inc++;
    }


    for(g=0;g<=n;g++)
    {
        if(g<n)
            cout<<g<<" ";
        else
          cout<<g;      ///middle line
    }
    for(g=n-1;g>=0;g--)
    {

        cout<<" "<<g;
    }
    cout<<endl;


    gap=0,inc=n-1;                      ///after middle line
    for(i=0;i<n;i++){
        for(g=0;g<=gap;g++)cout<<"  ";

        for(g=0;g<=inc;g++){
            if(g<inc)
              cout<<g<<" ";
            else
                cout<<g;
        }
        for(g=inc-1;g>=0;g--)cout<<" "<<g;
        cout<<endl;
        gap++;inc--;

    }
    return 0;
}
