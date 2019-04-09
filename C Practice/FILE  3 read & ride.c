#include<stdio.h>
int main()
{

    FILE *output,*input;
    input=fopen("input.txt","r");
    output=fopen("output.txt","w");
    int a[54],i,b,sum=0,avg;
    for(i=1;i<=5;i++){
    scanf("%d",&a[i]);}
    for(i=1;i<=5;i++){
        sum+=i;
        printf("     %d\n",sum);
    }
    avg=sum/5;
    //fprintf(output," The sum  is: %d\n",sum);
    //fprintf(output," The avarage of numbers are: %d",avg);
    fprintf(" The sum  is: %d",sum);
    fprintf(" The avarage of numbers are: %d",avg);
    fclose(input);
    fclose(output);
    return 0;

}
