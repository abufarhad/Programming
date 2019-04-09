# include <iostream>
# include <stdio.h>
using namespace std;
int main (void){
    int i, j, n;
    cout<<"Number of co-efficient"<<endl;
    cin>>n;
    float a[10], b[10],C, sum=0;
    cout<<"Input the co-efficients"<<endl;
    for (i=1; i<=n; i++)
        cin>>a[i];
    b[1]=1;
    printf("b (1) = 1\n");
    for (i=2; i<=n+3; i++) {
        for (j=i-1; j>0; j--)   {
            b[i]=(sum+(a[i-j]*b[j]));
            sum=sum+a[i-j]*b[j];     }
        printf("b (%d) = %f",i,b[i]);
        cout<<endl;   sum=0;  }
    cout<<"Approacing towards the Root"<<endl;
    for (i=1; i<=n+2; i++){
        C=(b[i]/b[i+1]);
        cout<<"C "<<i<<"= "<<C<<endl;  }
    return 0;}

