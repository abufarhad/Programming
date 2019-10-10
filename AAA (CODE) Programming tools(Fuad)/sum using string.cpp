#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;

int main()
{
    char num1[100];
    char num2[100];
    char sum[100];
    char ch;

    int i,temp,len,rem=0;


    cin>>num1;
    cin>>num2;

    if(strlen(num1)>strlen(num2))
        len=strlen(num1);
    else
        len=strlen(num2);

    for(i=(len-1);i>=0;i--)
    {
        if
        temp=rem+num1[i]-'0'+num2[i]-'0';

        cout<<temp<<endl;

        if(temp>9)
        {
            temp=temp-10;

            sum[i]=temp;
            rem=1;
        }
        else
        {
           ch=(char)temp;
            sum[i]='ch';
        }


    }
    sum[len]='\0';

    cout<<sum<<endl;
}
