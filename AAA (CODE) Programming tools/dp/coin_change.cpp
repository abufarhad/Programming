
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n_coin;
    cout<<"enter number of coins : ";cin>>n_coin;
    int coin[10];
    cout<<"enter the value of "<<n_coin<<" coins ";
    for(int i=1;i<=n_coin;i++)
        cin>>coin[i];
    int amount;
    cout<<"enter the total amount to find : ";cin>>amount;

    int arr[n_coin+1][amount+1];

    for(int i=0;i<=amount;i++)
        arr[0][i]=i;

    for(int i=0;i<=n_coin;i++)
        arr[i][0]=0;

    for(int i=0;i<=amount;i++)
        arr[1][i]=i/coin[1];

    for(int i=2;i<=n_coin;i++){
        for(int j=1;j<=amount;j++){
            if(j<coin[i])
                arr[i][j]=arr[i-1][j];
            else
                arr[i][j]=min(1+arr[i][j-coin[i]],arr[i-1][j]);
        }
    }

    for(int i=0;i<=n_coin;i++){
            cout<<"  ";
        for(int j=0;j<=amount;j++){
            cout<<arr[i][j]<<"  ";
        }
    cout<<endl;
    }

    cout<<"number of minimum coins to find the value is "<<arr[n_coin][amount]<<endl;
    cout<<" the coins are :";

    while(n_coin!=1){
    int i=n_coin,j=amount;
    while(arr[i][j]!=0){
        if(arr[i][j]==arr[i-1][j]){
            i--;
        }else{
            cout<<coin[i]<<" ";
            j=j-coin[i];

        }
    }
    cout<<"\n--------------\n";
        n_coin--;
    }

    return 0;
}
