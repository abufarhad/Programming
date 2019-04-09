#include<bits/stdc++.h>
using namespace std;
#define ll long long

int data[1000];
void Merge(int p,int q, int r)
{
    int n=q-p+1;
    int m=r-q;
    int i,j;
    int Left[n+1],Right[m+1];
    for(i=1;i<=n;i++)
        Left[i]=data[p+i-1];
    for(j=1;j<=m;j++)
        Right[j]=data[q+j];
    Left[n+1]=INT_MAX;
    Right[m+1]=INT_MAX;
    i=1;
    j=1;
    for(int k=p;k<=r;k++)
    {
        if(Left[i]<=Right[j])
        {
            data[k]=Left[i];
            i++;
        }
        else
        {
            data[k]=Right[j];
            j++;
        }
    }
}

void MergeSort(int l,int h)
{
    if(l<h)
    {
        int mid=floor((l+h)/2.0);
        MergeSort(l,mid);
        MergeSort(mid+1,h);
        Merge(l,mid,h);
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>data[i];
    MergeSort(1,n);
    cout<<"Sorted data: ";
    for(int i=1;i<=n;i++)
        cout<<data[i]<<' ';

    return 0;
}
