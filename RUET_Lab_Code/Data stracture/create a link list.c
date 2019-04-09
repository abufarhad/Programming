#include <stdio.h>
 struct node{
   int data;
   struct node *prev;
   struct node *next;
  };

 int main()
 {
   int i, n;
   struct node *head, *start;
   head=(struct node *)malloc(sizeof(struct node));
   head->prev=NULL;
   start=head;
   struct node *temp;
   for(i=0;i<5;i++)
   {
   temp=(struct node *)malloc(sizeof(struct node));
   temp->data=i;
   temp->prev=head;
   head->next=temp;
   head=head->next;
   }
   head->next = NULL;
   head=start;
   while(head->next!=NULL)
   {
   head=head->next;
   printf("%d\t", head-> data);
   }
  scanf("%d", &n);
     head=start;
     for(i=0;i<n;i++)
    {
        head=head->next;
        if(head==NULL)
            break;
    }
  struct node *nn=(struct node *)malloc(sizeof(struct node));
  scanf("%d", &nn->data);
  nn->next=head->next;
 head->next=nn;
  nn->prev  =head;

  head=nn->next;
  head->prev=nn;
   head=start;
   while(head->next!=NULL)
   {
   head=head->next;
   printf("%d   ", head-> data);
   }
     printf("\nIn backward direction\n");
   while(head->prev!=NULL)
   {
 printf("%d   ", head-> data);
   head=head->prev;
   }
   return 0;
 }
