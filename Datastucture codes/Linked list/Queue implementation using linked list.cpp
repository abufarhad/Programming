#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct Queue
{
    struct Queue *next ;
    ll data;
};

struct  Queue *Front=NULL , * Back=NULL  ;

void add(ll data)
{
    struct Queue *newnode;
    newnode=new Queue();

    newnode->data=data;
    newnode->next=NULL;

    if(Front==NULL) Front=Back=newnode;
    else
    {
        Back->next=newnode;
        Back=newnode;
    }
    //cout<<data <<" inserted"<<endl;
}

bool isempty()
{
    return Back==NULL;
}

ll peek()
{
    return Front->data;
}

void Remove()
{
    if(Front==NULL)cout<<"Queue is empty"<<endl;
    else
    {
        struct Queue *tmp;
        tmp=Front;
        Front=Front->next;

        free(tmp);
    }
}

void desplay()
{
    if(Front==NULL)cout<<"Queue is empty"<<endl;
    else
    {
        struct Queue *tmp;
        tmp=Front;
        while(tmp!=NULL)
        {
            cout<<tmp->data<<" ";
            tmp=tmp->next;
        }
    }
}


int main()
{
    add(1);
    add(2);
    add(3);
    add(4);

    desplay();

    cout<<endl<<"top = "<<peek()<<endl;
    Remove();

    desplay();
}

