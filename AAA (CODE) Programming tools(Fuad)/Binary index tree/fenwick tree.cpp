#include<bits/stdc++.h>
using namespace std;

int arr[100];

int bit[101];


void update(int index,int value,int n)
{
    index=index+1;

    while(index<=n)
    {
        bit[index]+=value;

        index+=index &(-index);
    }
}


int query(int index)
{
    index=index+1;

    int sum=0;
    while(index>0)
    {
        sum+=bit[index];

        index-=index & (-index);
    }
    return sum;
}

int main()
{

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i++)
    {
        update(i,arr[i],n);
    }
    cout<<"ss"<<endl;
    while(1)
    {
        int choise;
        cout<<"enter choice :";
        cin>>choise;

        if(choise==1)
        {
            cout<<"update selected :"<<endl;
            int id,val;
            cout<<"select index : ";cin>>id;
            cout<<"select value : ";cin>>val;

            int tem=val;
            if(val>=arr[id])
                val=abs(arr[id]-val);
            if(val<arr[id])
                val=-abs(arr[id]-val);

            arr[id]=tem;
            update(id,val,n);
        }
        else if(choise==2)
        {
            cout<<"range query selected : ";
            int s,t;
            cin>>s>>t;
            cout<<"from "<<s<<" to "<<t<<" sum is "<<query(t)-query(s-1)<<endl;

        }


    }

    return 0;
}
