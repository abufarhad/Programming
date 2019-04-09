#include<stdio.h>

struct customer{
int  no;
char name[30];
float balance[30];
char pasword[33];
};

struct customer c[100];
void main(void){
int menu();int op;
for(; ;){
op=menu();
switch(op){
case 1:printf("You pressed New account ");break;
case 2:printf("You pressed  credit ");break;
case 3:printf("You pressed  debit ");break;
case 4:printf("You pressed  balance ");break;
case 0:printf("You pressed  Exit ");break;
}
if(op==0)break;}
}

int menu(){
int option;
printf("\n\n.......Menu........\n");
printf("1.Account");
printf("2.Credit");
printf("3.Debit");
printf("4.Balance");
printf("0.Exit");
printf("Enter your option");
scanf("%d",&option);
return (option);
}
int main( ){
    printf("Enter customer  no :");
    scanf("%d",&c[0].no);
    printf("Enter name:  :");
    scanf("%s",&c[0].name);
    printf("Enter balance :");
    scanf("%f",&c[0].balance);

    printf("\n\n.......Account....... \n");
    printf("Account no :%d\n",c[0].no);
    printf("Name :%s\n",c[0].name);
    printf("Balance :%f",c[0].balance);
}
