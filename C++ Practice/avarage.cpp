#include<iostream>
using namespace std;
#include<conio.h>

/* Start Of Main Program */
int main()
{

   /* Declaration Of Variables */
   int p, no_ply, ing[10], run[10], avg[10];
   char name[10][10];

   //clrscr();


   /* Asking For The Input From User */
   cout<<"\n Enter No. Of Players :";
   cin>>no_ply;
   for(p=0; p<no_ply; p++)
   {
      avg[p]=0;
      cout<<"\n Enter Player's Name :";
      cin>>name[p];
      cout<<"\n Enter Runs Scored :";
      cin>>run[p];
      cout<<"\n Enter No. Of Innings :";
      cin>>ing[p];
      avg[p]=run[p]/ing[p];
   }



   /* Printing The Output Onto The Screen/Console */
   for(p=0; p<no_ply; p++)
   {
      cout<<"\n Player's Name : "<<name[p];
      cout<<"\n Runs Scored : "<<run[p];
      cout<<"\n No. Of Innings : "<<ing[p];
      cout<<"\n Avg Runs : "<<avg[p];
   }

   getch();
}
