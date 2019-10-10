#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    ///claculating particular number how many
    int kount[100],tem[100],c=0;
    int d=1,i;
    sort(arr,arr+5);
    for(i=0;i<5;i++){
        if(arr[i]==arr[i+1]){
            d++;
        }
        else{
            tem[c]=arr[i];
            kount[c]=d;
            d=1;
            c++;
        }
    }

//    for(int j=0;j<c;j++)/// just print
//        cout<<tem[j]<<" "<<kount[j]<<endl;

///checking every number exactly once or not
    int flag=0;
    for(int i=0;i<c;i++)
    {
        if(kount[i]>1)
        {
            flag=1;break;
        }
    }
    int sum=0;
     for(int i=0;i<5;i++)
            sum=arr[i]+sum;

    ///if once
    if(flag==0){


        cout<<sum<<endl;
        return 0;
    }
    ///if not once
    vector<int>res;
    ///finding set to substract
    for(int i=0;i<c;i++){
        if(kount[i]==2)
            res.push_back(tem[i]*2);
        if(kount[i]>2)
            res.push_back(tem[i]*3);

    }
    sort(res.begin(),res.end());
    sum=sum-res[res.size()-1];

    cout<<sum<<endl;
    return 0;
}
