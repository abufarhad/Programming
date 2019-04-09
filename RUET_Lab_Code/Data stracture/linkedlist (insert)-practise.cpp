
//............................BAKI ACHE...................................................

#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
 struct node*head;
 //struct node*temp=(struct node*)malloc(sizeof(struct node));
 void insert(int x , int p){

 node*temp1=new node();
 temp1->data=x;
 temp1->next=NULL;
 if(p==1){
    temp1->next=head;
    head=temp1;
    return ;}
 }
 void print(){
 node*temp=head;
 printf("List is : ");
 while(temp!=NULL){
    printf("%d  ",temp->data);
    temp=temp->next;
 }
 printf("\n");
 }
 int main()
 {
     head=NULL;
     int n,x,p,i;
     printf("How many number you need for your linked list :  ");
     scanf("%d",&n);
     for(i=0;i<n;i++){
          scanf("%d%d",&x,&p);
     insert (x,p);}//2
//     insert(3,2);//2 3
//     insert (4,1);//4 2 3
//     insert(5,2);//4 5 2 3
    print ();
 }
