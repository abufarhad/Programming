
#include<bits/stdc++.h>
using namespace std;
int mat[100][100];
int main()
{
    char first[100],second [100];
    cin>>first;
    cin>>second;
    int len1=strlen(first);
    int len2=strlen(second);
    int l=0,m=0,i,j;
    int a,b,temp=0;
    for(i=0;i<len2;i++)
    {
        m=0;
        for(j=0;j<len1;j++)
        {
            if(second[i]==first[j])
            {
                if(l==0 || m ==0){
                    mat[l][m]=1;
                   m++;
                }
                else if(mat[l-1][m-1]>0){
                    mat[l][m]=mat[l-1][m-1]+1;
                    m++;
                }
                else{
                   mat[l][m]=1;
                   m++;
                }
            }
            else{
                mat[l][m]=0;
                m++;
            }

            if(mat[l][m-1]>temp)
            {
                temp=mat[l][m-1];
                a=l;b=m-1;
            }

        }
        l++;
    }
    for(i=0;i<len2;i++){
        for(j=0;j<len1;j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }
    cout<<"the common substring length : "<<temp<<endl;
    cout<<"\n\nthe sub-string is :";
    while(mat[a][b]>0)
    {
        cout<<mat[a][b];
        a--;
        b--;
    }
    return 0;
}
