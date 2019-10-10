


#include<bits/stdc++.h>
using namespace std;
int arr[100+1];
int diff[100+1];


void init(int n)
{
    diff[0]=arr[0];
    diff[n]=0;

    for(int i=1;i<n;i++)
    {
        diff[i]=arr[i]-arr[i-1];
    }

}

void update(int l,int r,int x)
{
    diff[l]+=x;
    diff[r+1]-=x;
}

void print(int n)
{
    for(int i=0;i<n;i++)
    {
        if(i==0)
            arr[i]=diff[i];
        else
            arr[i]=diff[i]+arr[i-1];
    }


    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>arr[i];
    init(n);
    update(1,n-1,1);
    print(n);
    update(1,3,5);
    print(n);

}
