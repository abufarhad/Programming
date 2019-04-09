#include<stdio.h>
int main()
{
    char info[13];
    info[3]='a'; info[4]='b'; info[5]='c'; info[7]='d'; info[6]='f'; info[7]='e'; info[8]='f'; info[11]='s';

    int  LINK[10];
    LINK[4]=0; LINK [5]=4;  LINK[6]=6;  LINK[7]=0;  LINK[11]=8;  LINK[8]=11;  LINK[9]=9;  LINK[10]=0;
     LINK[11]=7;LINK[12]=0; LINK[2]=4 ;
  int   start=6;
  int loc;
  int AVAIL;
  char item;
  scanf("%c",&item);
    scanf("%d",&AVAIL);
      scanf("%d",&loc);
    if(AVAIL==0)
        printf("OVERFLOW");
    int New=AVAIL;
    AVAIL=LINK[AVAIL];
    info[New]=item;
    LINK[New]=start;
    start=New;
 // int   ptr=start;
 if (loc==0)
 {
     LINK[New]=start;
     start=New;
 }
 else
 {
     LINK[New]=LINK[loc];LINK[loc]=New;
 }
 int ptr=start;

    while(ptr!=0){
        printf("%c",info[ptr]);
    ptr=LINK[ptr];}
    return 0;
}
