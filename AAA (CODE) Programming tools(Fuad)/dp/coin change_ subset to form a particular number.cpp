
#include<bits/stdc++.h>
using namespace std;
int arr[100][100];
int main()
{
    int n;
    cin>>n;
    int value[100];
    for(int i=1;i<=n;i++)
        cin>>value[i];

    int num;
    cin>>num;
    for(int i=1;i<=num;i++) arr[0][i]=0;
    for(int i=0;i<=n;i++) arr[i][0]=1;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==value[i])
            {
                if(arr[i-1][j]>0)
                    arr[i][j]+=arr[i-1][j];
                else
                    arr[i][j]=1;
            }
            else if(arr[i-1][j]>0)
                arr[i][j]=arr[i-1][j];
            else
                arr[i][j]=0;
        }
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=num;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}

