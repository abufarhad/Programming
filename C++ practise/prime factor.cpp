#include<bits/stdc++.h>
using namespace std;

void factor(int n)
{
    int i ,cnt=0,cn=0;
    for(i=2; i<=(int)sqrt(n); i++)
    {
        while(n % i == 0)
        {
            printf("%d ",i);
            cnt++;
            n /= i;
        }
    }
    if (n > 1) printf("%d",n);
    cn++;
    printf("\n");
    printf("%d \n",(cnt+cn));
}
int main()
{
    long long  int n,i,a[100000];
    cin>>n;
    // primefactor( n);
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        factor( a[i]);
    }
    return 0;
}


//void primefactor(int n)
//{
//    while(n%2==0)
//    {
//        cout<<"2"<<" ";
//        n=n/2;
//    }
//    for(int i=3; i<sqrt(n); i=i+2)
//    {
//        while(n%i==0)
//        {
//            cout<<i<<" ";
//            n=n/i;
//        }
//    }
//    if(n>2)
//    {
//        cout<<n<<endl;
//    }
//}
