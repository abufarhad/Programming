#include<bits/stdc++.h>
using namespace std;

 int i,j,m,n;
 void negetion();
 void conjunction();
 void disjunction();
 void exclusiveOR();
 void conditional();
 void  biconditional();
 //void exit();

//int  main(){
//     int ch,i=1;
//     while(i=1){
//     printf("\n0.Exit \n1. negetion \n2.conjunction \n3.disjunction \n4.exclusiveOR \n5.conditional \n6.bi-conditional\n");
//      printf("Enter your choice \n");
//cin>>ch;
int main() {
    int ch,i=1,k=0;
    while(i=1){
    cout<<"\n1.negation\n2.conjunction\n3.disconjunction\n4.XOR\n5.conditional\n6.biconditional\n7.exit\n";
    cout<<"Enter your choice  ";
    cin>>ch;

 switch (ch){
   // case 0: exit(); break;
     case 1: negetion(); break;
      case 2: conjunction(); break;
       case 3:  disjunction(); break;
        case 4: exclusiveOR(); break;
         case 5: conditional(); break;
          case 6:  biconditional(); break;
     default :
     printf("Wrong choice !!!!!!!!!!!");
     }}return 0;}

    void negetion(){
    int p;
    cout<<"enter the value:\n";
    cin>>p;
    cout<<"the truth value is "<<!p;   }

void conjunction(){
    int p,q;
    cout<<"enter two value:\n";
    cin>>p>>q;
    cout<<"the truth value is "<<(p&q);   }
void disjunction(){
    int p,q;
    cout<<"enter two value:\n";
    cin>>p>>q;
    cout<<"the truth value is "<<(p|q);   }

void exclusiveOR(){
    int p,q;
    cout<<"enter two value:\n";
    cin>>p>>q;
    cout<<"the truth value is "<<(p^q);   }

void conditional(){
    int p,q,a;
    cout<<"enter two value:\n";
    cin>>p>>q;
    a=(!p|q);
    cout<<"the truth value is "<<a;   }

void biconditional(){
    int p,q,a;
    cout<<"enter two value:\n";
    cin>>p>>q;
    a=((p&q)|(!p&!q));
    cout<<"the truth value is "<<a;   }




