#include<bits/stdc++.h>
using namespace std;
void Merge(int *a, int low, int high, int mid)
{
    int i,j,k,temp[high-low+1];
    i=low;
    j=mid+1;
    k=0;
    while(i<=mid & j<=high)
    {
        if(a[i]<a[j])
        {
            temp[k++]=a[i];
            i++;
        }
        else
        {
            temp[k++]=a[j];
            j++;
        }
    }
    while(i<=mid)
    {
        temp[k++]=a[i];
        i++;
    }
    while(j<=high)
    {
        temp[k++]=a[j];
        j++;
    }
    for(i=low; i<=high; i++)
    {
        a[i]=temp[i-low];
    }

}
void MergeSort(int *a,int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        MergeSort(a,low,mid);
        MergeSort(a,mid+1,high);
        Merge(a,low,high,mid);
    }
}
int main()
{
    int arr[52],a[13];
    srand( time(NULL));
    {
        for(int i=0; i<52; i++)
        {
            arr[i]=rand();
        }
        for(int i=0; i<13; i++)
        {
            a[i]=arr[i]%52+1;
        }
        for(int i=0; i<13; i++)
        {
            cout<<a[i]<<" ";
        }

    }
    MergeSort(a,0,13-1);
    cout<<"\nSorted Data: "<<endl;
    for(int i=0; i<13; i++)
    {
        //cout<<a[i]<<"  ";
        int  d=a[i]/13;
         if(d<1) { cout<<"C"<<a[i]%13+1<<" ";}
        else if(d<2) {cout<<"D"<<a[i]%13+1<<" ";}
        else if(d<3) {cout<<"H"<<a[i]%13+1<<" ";}
       else if  (d<4) {cout<<"S"<<a[i]%13+1<<" " ;}
       else cout<<" ";

    }
    return 0;
}
