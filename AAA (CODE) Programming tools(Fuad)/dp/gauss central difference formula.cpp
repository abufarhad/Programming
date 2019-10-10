#include<bits/stdc++.h>
using namespace std;

double arr[100][100]; ///will keep value for forwad difference table
double arr2[100][100];///will keep value for backrwad difference table

double x,fyp,byp,p1,h,p2;
int i,j,n,d,tem,mid;

double factorial(double l); /// calculatin for factorial
double cal_p1(double l,double p); /// calcultion p for forward
double cal_p2(double l,double p); /// calcultion p for backward
void input(); /// required input data
void gauss_forward(); /// gauss forwad calculation
void gauss_backward() ;/// gauss backrwad calculation


int main()
{
    int choice,flag=0;
    cout<<"-------------press 1 for Gauss input details------------ "<<endl;
    cout<<"-------------press 2 for gauss forward---------- "<<endl;
    cout<<"-------------press 3 for gauss backward--------- "<<endl;
    cout<<"-------------press 0 to exit----------------"<<endl;
    while(1)
    {
        cout<<"\t \nenter choice :";cin>>choice;
        switch(choice)
        {

            case 1:input();break;
            case 2:gauss_forward();break;
            case 3:gauss_backward();break;
            case 0:flag=1;break;

        }

        if(flag==1)break;
    }

    return 0;
}

 /// calculatin for factorial
double factorial(double l)
{
    double fact=1;
    for(double j=1;j<=l;j++)
        fact*=j;

    return fact;
}

/// calcultin p for forward
double cal_p1(double l,double p)
{
    double fac=factorial(l);

    double sum=p;
    for(double j=1;j<l;j++){

        sum*=(p-j);
        if(j>=3)
            sum*=(p+1);
    }
    return sum/fac;

}

/// calcultin p for gauss backward
double cal_p2(double l,double p)
{
    double fac=factorial(l);

    double sum=p;
    for(double j=1;j<l;j++){

        sum*=(p+j);
        if(j>=3)
            sum*=(p-1);
    }
    return sum/fac;

}

/// required input data
void input()
{

    cout<<"enter how many numbers : ";cin>>n;
    d=n;//d--;
    mid=(d/2)+1;/// to determine middle position

    cout<<"X   Y"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i][0];cout<<"  ";
        arr2[i][0]=arr[i][0];
        cin>>arr[i][1];cout<<endl;
        arr2[i][1]=arr[i][1];
    }
    cout<<"for value of x u want to find y : ";cin>>x;
    h=arr[1][0]-arr[0][0];
    //cout<<"h "<<h<<endl;
    p1=(x-arr[mid][0])/h;//cout<<"p1 :"<<p1<<endl;
    p2=(x-arr[mid][0])/h;//cout<<"p2 :"<<p2<<endl;
    ///forward table making
    tem=n-1;
    for(i=2;i<n+1;i++)      ///here i is to track column
    {
        for(j=0;j<tem;j++) ///j is to track the row
        {
            arr[j][i]=arr[j+1][i-1]-arr[j][i-1];
        }
        tem--;
    }

     ///backward table making ///here i is to track column
    tem=1;
    for(i=2;i<n+1;i++)
    {
        for(j=tem;j<n;j++) ///j is to track the row
        {
            arr2[j][i]=arr2[j][i-1]-arr2[j-1][i-1];
        }
        tem++;
    }
}

/// newton forward calculation
void gauss_forward()

{
    cout<<"\n******* difference table for forward **********\n";
      for(i=0;i<n;i++){
        for(j=0;j<n+1;j++){
            cout<<setw(5)<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    fyp=arr[mid][1];
    double a=1;
    for(int j=2;j<=6;j++)
    {
        d--;
        mid=(d/2)+1;
        fyp+=arr[mid][j]*cal_p1(a,p1);
        a++;
    }
    cout<<"\n  answer by gauss forward method:"<<fyp<<endl;
}

 /// newton backrward calculation
void gauss_backward()
{
     cout<<"\n******* difference table for backward **********\n";
    for(i=0;i<n;i++){
        for(j=0;j<n+1;j++){
            cout<<setw(5)<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    mid=(n/2)+1;
    d=n;
    byp=arr[mid][1];
    double a=1;int c=1;
    for(int j=2;j<=n;j++)
    {
        d--;
        if(d%2==0)
            mid=(d/2)+1;
        else
            mid=ceil(d/2.0);
        byp+=arr2[mid+c][j]*cal_p2(a,p2);
        a++;c++;
    }
    cout<<"\n  answer by guass backward method:"<<byp<<endl;
}

