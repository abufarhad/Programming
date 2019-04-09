#include<bits/stdc++.h>
using namespace std;
#define ll long long

int binarySearch(int data[],int x,int l,int h)
{
    int mid=(l+h)/2;

    if(l==h && data[mid]!=x)
        return -1;
    if(data[mid]==x)
        return mid;
    int p;
    if(data[mid]>x)
        p=binarySearch(data,x,l,mid-1);
    else if(data[mid]<x)
        p=binarySearch(data,x,mid+1,h);

	return p;
}

int main()
{
    int n;
    cin>>n;

    int data[n];
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }

    int x;
    cin>>x;

    cout<<"Searching for "<<x<<"....";
    int pos=binarySearch(data,x,0,n);
    if(pos==-1)
        cout<<"Not Found\n";
    else
        cout<<"Found at index: "<<pos<<endl;

    return 0;
}
