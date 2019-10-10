
#include<bits/stdc++.h>
using namespace std;

void minheap(int arr[],int n,int i);
void heapsort(int arr[],int n);
void print(int arr[],int n);

int main()
{
    int n,arr[100];
    cin>>n;

    for(int i=0;i<n;i++) cin>>arr[i];
    heapsort(arr,n);

    cout<<"after heap sorting :\n";
    print(arr,n);

    return 0;
}

void heapsort(int arr[],int n){

    for(int i=n/2-1;i>=0;i--)
        minheap(arr,n,i);
    cout<<"\n\nthe minheap is :\n";
    print(arr,n);
    cout<<endl<<endl;

    for(int i=n-1;i>=0;i--){
        swap(arr[0],arr[i]);
        minheap(arr,i,0);
    }


}

void minheap(int arr[],int n,int i){

    int parent = i;
    int left = 2*parent+1;
    int right=2*parent+2;

    if(left<n && arr[left]<arr[parent])
        parent=left;
    if(right<n && arr[right]<arr[parent])
        parent=right;

    if(parent!=i){
        swap(arr[i],arr[parent]);
        minheap(arr,n,parent);
    }

}

void print(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<"\t"<<arr[i];
    cout<<endl;
}
