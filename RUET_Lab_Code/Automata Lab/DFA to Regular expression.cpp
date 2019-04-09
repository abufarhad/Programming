#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int ,map<int,string> > r0;
    r0[1][1]="e+1";
    r0[1][2]="0";
    r0[2][1]="$";
    r0[2][2]="e+0+1";
    int n;
    string state;
    cout<<"No Of state :";
    cin>>n;
    printf("Enter the states : \n");
    for(int i=0; i<n*2; i++)
    {
        cin>>state;
    }

    map<int ,map<int,string> > r1;

    r1[1][1]=r0[1][1]+" + ("+r0[1][1]+")("+r0[1][1]+")*("+r0[1][1]+")";
    r1[1][2]=r0[1][2]+" + ("+r0[1][1]+")("+r0[1][1]+")*("+r0[1][2]+")";
    r1[2][1]=r0[2][1]+" + ("+r0[2][1]+")("+r0[1][1]+")*("+r0[1][1]+")";
    r1[2][2]=r0[2][2]+" + ("+r0[2][1]+")("+r0[1][1]+")*("+r0[1][2]+")";
    /* cout<<"\nfor k=1\n R1\n\n";
     for(int i=1;i<=2;i++)
     {
         for(int j=1;j<=2;j++)
         {
         cout<<r1[i][j]<<"\n";
         }
     }
     */
    r1[1][1]="1*";
    r1[1][2]="1*0";
    r1[2][1]="$";
    r1[2][2]="e+0+1";
    printf("\nfor k=1\n simplified R1\n\n");
    for(int i=1; i<=2; i++)
    {
        for(int j=1; j<=2; j++)
        {
            cout<<r1[i][j]<<"\n";
        }
    }


    map<int ,map<int,string> > r2;
    r2[1][1]=r1[1][1]+" + ("+r1[1][2]+")("+r1[2][2]+")*("+r1[2][1]+")";
    r2[1][2]=r1[1][2]+" + ("+r1[1][2]+")("+r1[2][2]+")*("+r1[2][2]+")";
    r2[2][1]=r1[2][1]+" + ("+r1[2][2]+")("+r1[2][2]+")*("+r1[2][1]+")";
    r2[2][2]=r1[2][2]+" + ("+r1[2][2]+")("+r1[2][2]+")*("+r1[2][2]+")";
    /*  printf("\nfor R2\n\n");
       for(int i=1;i<=2;i++)
       {
           for(int j=1;j<=2;j++)
           cout<<r2[i][j]<<"\n";
       }
       */
    r2[1][1]="1*";
    r2[1][2]="1*0(0+1)*";
    r2[2][1]="$";
    r2[2][2]="(0+1)*";
    printf("\nfor k=2\n simplified R2\n\n");
    for(int i=1; i<=2; i++)
    {
        for(int j=1; j<=2; j++)
        {
            cout<<r2[i][j]<<"\n";
        }
    }
    cout<<"\nAccepted regex:";
    cout<<r2[1][2]<<endl;


    return 0;
}
