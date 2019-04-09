#include<stdio.h>
int main()
{

    FILE *output_file,*input_file;
    input_file=fopen("input.txt","r");
    output_file=fopen("output.txt","w");
    int a,b,c,d,e,sum;
    fscanf(input_file,"%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=a+e;
    fprintf(output_file," The sum of a & b is: %d",sum);
    fclose(input_file);
    fclose(output_file);
    return 0;

}
