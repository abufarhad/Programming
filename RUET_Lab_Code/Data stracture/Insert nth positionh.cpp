
//****************BAKI ACHE****************************

#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node *head;
void insert(int x, int n )
{
    //struct Node* temp=(struct Node*)malloc(sizeof(struct Node));//create a node
  Node *temp=new Node();
    temp->data=x;
   temp->next=head;
   head=temp;
}
void print()
{
    Node* temp=head;//LOCAL VARIABLE
    printf("List is : ");
    while (temp!=NULL){
        printf("%d  ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    head=NULL;
    printf("How many number\n");
    int i,n,m,x;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the number\n");
        scanf("%d",&x);
        printf("Enter the position :\n");
        scanf("%d",&m);
        insert(x,m);
        print();
    }
    return 0;
}


