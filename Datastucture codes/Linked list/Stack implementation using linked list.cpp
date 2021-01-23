#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct node
{
    ll data ;
    struct node *next;
};

struct node* top;

void push(ll data)
{
    struct node* newnode;
    newnode= new node();

    newnode->data=data;
    newnode->next =top;

    top=newnode;  //new node is now in top
}

bool isempty()
{
    return top==NULL;
}

ll peek( )
{
    if(! isempty() )return top->data;
    else  cout<<"Stack is empty "<<endl;
}

void pop( )
{
    struct node* tmp;
    if( top !=NULL  )
    {
        tmp=top;
        top=top->next;

        tmp->next=NULL;  //destroy connection between first and second element
        free(tmp);          //free() function is used to deallocate memory used by one program and
                                // move it back to available memory area
    }
    else  cout<<"Stack is empty "<<endl;
}

void display()
{
    struct node *tmp;
    if(top==NULL)  cout<<"Stack is empty "<<endl;
    else
    {
        tmp=top;
        while(tmp!=NULL  )
        {
            cout<<tmp->data<<" ";
            tmp=tmp->next;
        }
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);


    display();

    cout<<endl<<"top = "<<peek()<<endl;
    pop();
    display();
    cout<<endl<<"top = "<<peek()<<endl;
}
