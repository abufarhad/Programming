#include<iostream>
using namespace std;

int main()
{
    int num1,num2,rem,LCD;

    while(1)
    {
        cin>>num1>>num2;
         if(num1<1 && num2<1)
            continue;

        while(num1>=1 && num2>=1)
        {
            rem=num2%num1;

            if(rem==0){
                LCD=num1;
                break;
            }
            num2=num1;
            num1=rem;
        }
        cout<<LCD<<endl;
    }
}
