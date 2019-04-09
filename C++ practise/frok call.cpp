#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>
//#include <sys/wait.h>

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char *a[5];
    string loc1="/home/farhad/Documents/codes/./testing";
    string loc2="/home/farhad/Documents/codes/./test_childwithin_a_child_calling";
    a[0]=(char*)loc1.c_str();
    a[1]=(char*)loc2.c_str();
    a[2]=NULL;

    int id,id2,status1,status2;
    id=fork();

    if(id==0)
    {
        id2=fork();

        if(id2==0)
        {
        cout<<"child within a child  calling "<<endl;
        status2=execv(a[1],a);
        if(status2==-1)cout<<"Error"<<endl;
        _exit(1);
        }

        if(id2>0)
        {
        cout<<"child within a parent  calling "<<endl;

        status1=execv(a[0],a);
        if(status1==-1)cout<<"Error"<<endl;
        _exit(1);
        int code2=wait(0);
        }


    }
    if(id>0)//printf("Inside Parent with id=%d pid= %d\n",id,(int)getpid());
    {
    int code=wait(0);
    printf("\nInside Program\n");

    }
    //
    return 0;
}

