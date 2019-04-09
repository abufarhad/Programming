#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll m,n,k,l,x1,y1,x2,y2,r;
    cin>>x1>>y1>>x2>>y2>>r;


    if(x1>=0 && x2<0 || x1<0 && x2>=0) cout<<"No"<<endl;

    if(x1>=0 && x2>=0  )      /// + +
    {

        if(x2>=x1 || y2>=y1 )
        {
            cout<< "No"<<endl;
        }

        if(y1>=0 && y2>=0)
        {
            n=y1-y2;
            if(n>=r) cout<<"Yes"<<endl;
            if(n<r) cout<< "No"<<endl;
        }

        if( y1<0 && y2<0)
        {
            if( abs(y1)-abs(y2) >= r ) cout<<"Yes"<<endl;
            else cout<< "No"<<endl;
        }

        if(y1>=0 && y2<0 || y1<0 && y2>=0) cout<<"No"<<endl;

    }



    ///


    if(x1<0 && x2<0)
    {

        if(y1<0 && y2<0)
        {
            if(abs(x2)>=abs(x1) ||abs (y2)>= abs(y1) )
            {
                cout<< "No"<<endl;
                return 0;
            }
        }


        if(y1>=0 && y2>=0)
        {
            if(abs(x2)>=abs(x1) || (y2)>= (y1) )
            {
                cout<< "No"<<endl;
                return 0;
            }

            n=y1-y2;
            if(n>=r) cout<<"Yes"<<endl;
            if(n<r) cout<< "No"<<endl;
        }

        if( y1<0 && y2<0)
        {
            if( abs(y1)-abs(y2) >= r ) cout<<"Yes"<<endl;
            else cout<< "No"<<endl;
        }

        if(y1>=0 && y2<0 || y1<0 && y2>=0) cout<<"No"<<endl;
    }
}
