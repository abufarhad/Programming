
/* Create or traverse linked list in C  */

#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
//struct node*head,*start;
int main()
{
    struct node*head,*start;

    start=(struct node*)malloc(sizeof(struct node));
    head=start;
    int i,n,x;
    printf("Enter how many node you create");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        struct node* temp=(struct node*)malloc(sizeof(struct node));
         scanf("%d",&temp->data);
  temp->next=NULL;
  head->next=temp;   head=temp;}
  head=start->next;
  while(head!=NULL){
    printf("%d  ",head->data);
    head=head->next;
  }
    }

