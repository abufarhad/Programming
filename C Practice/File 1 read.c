#include<stdio.h>
int main()
{

    FILE *input_file;
    input_file=fopen("aa.txt","r");
    char input[44];
    fgets(input,44,input_file);
    puts(input);
    //fprintf(input_file,"CSE RUET");
    return 0;

}
