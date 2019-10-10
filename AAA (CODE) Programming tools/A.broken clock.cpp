#include<iostream>
#include<cstdio>
using namespace std;



int main()
{

    int choice,minute,hour;
    cin>>choice;

    char kol;
    char arr[10];


    cin>>arr;

    int x1=arr[0]-'0';
    int x2=arr[1]-'0';

    int y1=arr[3]-'0';
    int y2=arr[4]-'0';

    hour=(x1*10)+x2;
    minute=(y1*10)+y2;


    if(minute>59)
            minute=y2;


    if (choice==12)
    {
        if(hour==0)
           hour=hour+1;
       else if(x2==0 && x1>1)
            hour=10;
       else if(hour>12)
            hour=x2;


    }


    if(choice==24)
    {
        if(hour>=24)
           hour=x2;

    }

    printf("%0.2d:%0.2d\n",hour,minute);
        return 0;
}
