
#include<bits/stdc++.h>
using namespace std;

int k=1;
void permute(char str[],int l,int r)
{
    if(l==r)
        cout<<k++<<" : "<<str<<endl;
    for(int i=l;i<=r;i++)
    {
        swap(str[i],str[l]);
        permute(str,l+1,r);
        swap(str[i],str[l]);
    }
}

int main()
{
    char str[100];
    cin>>str;
    permute(str,0,strlen(str)-1);

}
