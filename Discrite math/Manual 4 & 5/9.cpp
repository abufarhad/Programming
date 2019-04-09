#include<bits/stdc++.h>
using namespace std;
#define ll long long

int linearSearch(int data[],int x,int i,int n)
{
	if(i==n)
		return -1;
	if(data[i]==x)
		return i;
	int j=linearSearch(data,x,i+1,n);
	return j;
}

int main(){
    int n;
	cin>>n;
	int data[n];
	for(int i=0;i<n;i++){
		cin>>data[i];  }
    int x;
    cin>>x;
    cout<<"Searching for "<<x<<"....";
    int pos=linearSearch(data,x,0,n);
	if(pos==-1)
    	cout<<"Not Found\n";
    else
    	cout<<"Found at index: "<<pos<<endl;
    return 0;  }
