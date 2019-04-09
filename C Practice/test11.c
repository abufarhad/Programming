#include<stdio.h>
void main(void){
char reload[100][16];
int used[100];
FILE *fp;
fp=fopen("d:\\mytest.dat","r");
fscanf(fp,"%s",reload[0]);
fscanf(fp,"%s",&used);
puts(reload[0]);
fclose(fp);
}

