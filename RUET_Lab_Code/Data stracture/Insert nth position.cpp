
/* Insert at nth position  & code is C++ */

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node *head;
void insert(int x,int p )
{
    //struct Node* temp=(struct Node*)malloc(sizeof(struct Node));//create a node
    node*temp1=new node();
    temp1->data=x;
        temp1->next=head;
    head=temp;
    node*temp2=head;
    for(int i=0;i<p-2;i++){
        temp2=temp2->next;}
        temp1->next=temp2->next;
        temp2->next=temp1;
    }

void print()
{
    node* temp=head;//LOCAL VARIABLE
    printf("List is : ");
    while (temp!=NULL){
        \
 printf("%d  ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    head=NULL;
       insert(2 ,1);
        insert(3,2);
        insert(5, 1);
        insert(4,2);
        print();
    }
