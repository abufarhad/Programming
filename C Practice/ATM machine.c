#include<stdio.h>
#include<string.h>

struct customer{
int ano;
char name[20];
float balance;
char password[100];
};

struct customer cx[100];
int total=-1;
int valid=0;
int index;
//------------------start of main-------------//
void main(void)
{
    int menu();
    void input();
    void login();
    void credit();
    void debit();
    void blance();
    void logout();

    int op;
    //-------------------------start the program--------------------//
    for(;;){
    op=menu();
    switch(op)
    {
        case 1: input();break;
        case 2: credit();break;
        case 3: debit();break;
        case 4: blance();break;
        case 5: login();break;
        case 6: logout();
        case 0: printf("You pressed Exit\n");
    }//switch
    if(op==0) {printf("End of program run....\n");break;}
    }//for loop
    //----------------end of program------------------//
}//-----------end of main-//

void logout()
{
    valid=0;
    printf("Log out Successful\n");
}



void blance()
{
    if(valid==1)
    {
        printf("\nAccount No.: %d",cx[index].ano);
        printf("\nBalance= %f\n",cx[index].balance);
    }
    else
    printf("SORRY, you are invalid user....\n");
}

void debit()
{
    int temp;
    if(valid==1)
    {
        printf("Enter your amount: ");
        scanf("%d",&temp);
        if(cx[index].balance>=temp)
            cx[index].balance=cx[index].balance-temp;
        else
            printf("Sorry insufficient balance...");
    }
    else
        printf("Sorry you are not a valid user");
}


void credit()
{
    int temp;
    if(valid==1)
    {
        printf("Enter your amount: ");
        scanf("%d",&temp);
        cx[index].balance=cx[index].balance+temp;
    }
    else
        printf("Sorry you are not a valid user");
}


void login()
{
    int ac,i;
    char pass[10];
    valid=0;
    printf("Enter Account No.: ");
    scanf("%d",&ac);
    printf("\nEnter Password.: ");
    scanf("%s",pass);

    //printf("Output: \n");
    //printf("Account=%d\n",ac);
    //printf("Pass=%s\n",pass);
    for(i=0;i<=total;i++)
    {
        if(cx[i].ano==ac)
            if(strcmp(cx[i].password,pass)==0)
                {
                    valid=1;index=i;
                }
    }
    if(valid==1)
        printf("You are valid customer....\n");
    else
        printf("Invalid customer....\n");
}
void input()
{
    total++;
    printf("Account no.: ");
    scanf("%d",&cx[total].ano);
    printf("\nName: ");
    scanf("%s",cx[total].name);
    printf("\nBalance : ");
    scanf("%f",&cx[total].balance);
    printf("\nPassword(max 10 character): ");
    scanf("%s",cx[total].password);

    printf("\nOutput : \n");
    printf("Account no: %d\n",cx[total].ano);
    printf("Name : %s\n",cx[total].name);
    printf("Balance : %f\n",cx[total].balance);
    printf("password : %s\n",cx[total].password);
}
int menu()
{
    int option;
    printf("\n----Menu----\n");
    printf("1. New Account \n");
    printf("2. Credit \n");
    printf("3. Debit \n
    printf("4. Balance \n");
    printf("5. Login\n");
    printf("6. Logout\n");
    printf("0. Exit \n");
    printf("\n Enter your option: ");
    scanf("%d",&option);
    return(option);

}

