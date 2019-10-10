#include<stdio.h>
int main()
{

    FILE *output,*input;
    input=fopen("input.txt","r");
    output=fopen("output.txt","w");
    int a[54],i,b,sum=0,avg;
    for(i=0; i<6; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<6; i++)
    {
        sum=sum+i;
    }
    avg=sum/6;
    fprintf(output," The sum  is: %d\n",sum);
    fprintf(output," The avarage of numbers are: %d",avg);
    //fclose(input_file);
    //fclose(output_file);
    return 0;

}
