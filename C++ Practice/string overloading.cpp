#include<conio.h>
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class string_concat
{
    char name[20];
public:
    void input()
    {
       cin>>name;// gets(name);
    }
    void output()
    {
        cout<<name<<endl;
    }
    string_concat operator+(string_concat s2)
    {
        string_concat s;
       // strcpy(s.name," ");
        strcat(s.name,strcat(name," "));
        strcat(s.name,s2.name);
        return(s);
    }
};
int  main()
{
    string_concat s1,s2,s3;
cout<<"Enter first name:";
    s1.input();
cout<<"Enter last name:";
    s2.input();
cout<<"first name is:";
    s1.output();
cout<<"Last name is:";
    s2.output();
    s3=s1+s2;
cout<<"Complete name is:";
    s3.output();
}
