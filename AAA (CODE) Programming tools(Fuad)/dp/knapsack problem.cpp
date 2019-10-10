#include<bits/stdc++.h>
using namespace std;

int main()
{
    int weight[10],value[10];
    int n;
    int tw;
    cout<<"enter highest weight can be taken : ";cin>>tw;
    cout<<"\n\t enter number of items : ";
    cin>>n;
    cout<<"enter item weight and it's value :";
    for(int i=0;i<n;i++){
        cin>>weight[i]>>value[i];
    }
    for(int i=0;i<n;i++){
        cout<<weight[i]<<" - "<<value[i]<<endl;
    }
    int mat[100][100];
    for(int i=0;i<=tw;i++)
        mat[0][i]=i;
    for(int i=1;i<=n;i++)
        mat[i][0]=0;

    for(int i=0;i<=tw;i++){
        if(weight[0]<=i)
            mat[1][i]=value[0];
    }
    int k=1;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=tw;j++){
            if(j<weight[k])
                mat[i][j]=mat[i-1][j];
            else{
                mat[i][j]=max(value[k]+mat[i-1][j-weight[k]],mat[i-1][j]);
            }
        }
        k++;
    }

    cout<<"\n\n\t complete matrix :\n"<<endl;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=tw;j++)
            cout<<mat[i][j]<<"\t";

        cout<<endl;
    }

    cout<<"\n\n\tselected weights :  ";
    int i=n,j=tw;
    while(mat[i][j]!=0)
    {
        if(mat[i][j]!=mat[i-1][j]){
            cout<<weight[i-1]<<"\t";

            j=j-weight[i-1];i=i-1;
        }
        else{
            i--;
        }
    }


    return 0;
}
