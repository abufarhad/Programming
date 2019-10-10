#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    cout<<"give a string :"<<endl;
    cin>>str;
    cout<<"in sorted :";
    sort(str.begin(),str.end());
    cout<<str;

    int arr[10];
    cout<<"\n\nenter 10 array elements :"<<endl;
    for(int i=0;i<10;i++)
        cin>>arr[i];

    cout<<"\n\nsorted array : "<<endl;
    sort(arr+5,arr+10);

    for(int i=0;i<10;i++)
        cout<<arr[i]<<" ";


    return 0;
}
