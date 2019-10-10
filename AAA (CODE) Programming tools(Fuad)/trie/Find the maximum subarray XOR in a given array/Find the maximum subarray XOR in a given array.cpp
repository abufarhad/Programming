#include<bits/stdc++.h>
using namespace std;
#define INT_SIZE 32
struct node
{
    int value;

    node *arr[2];
} ;

node *newNode()
{
    node *temp=new node();
    temp->value=0;
    temp->arr[0]=NULL;
    temp->arr[1]=NULL;

    return temp;
}

void insert_(node * head,int pre_xor)
{
    node * temp=head;


    for(int i=INT_SIZE-1;i>=0;i--)
    {
        bool val=pre_xor & (1<<i);

        if(temp->arr[val]==NULL)
        {
            temp->arr[val]=newNode();
        }
        temp= temp->arr[val];
    }
    temp->value=pre_xor;

}


int query(node *head,int pre_xor)
{
    node *temp=head;

    for(int i=INT_SIZE-1;i>=0;i--)
    {
        bool val=pre_xor & (1<<i);

        if(temp->arr[1-val]!=NULL)
        {
            temp=temp->arr[1-val];
        }
        else if(temp->arr[val]!=NULL)
            temp= temp->arr[val];
    }
    return pre_xor^(temp->value);
}


int main()
{
    int n;

    cin>>n;


    node *head=new node();

    int arr[n];

    int pre_xor=0;

    insert_(head,0);

    int result=INT_MIN;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

        pre_xor=pre_xor^arr[i];

        insert_(head,pre_xor);
        result=max(result,query(head,pre_xor));

    }

    cout<<"maximum suB_array xor is : "<<result<<endl;



}
