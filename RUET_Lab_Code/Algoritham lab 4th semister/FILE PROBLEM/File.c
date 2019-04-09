#include <stdio.h>
int main()
{
   FILE *fp;
   int a,c,b;
   fp=fopen("new.txt","w");
   c=a*b;
   scanf("%d%d",&a,&b);
   fprintf(fp,"the sum is %d\n",c);
   fclose(fp);


    fp=fopen("new.txt","r");
    //fprintf(fp,"This is first text file");
    fscanf(fp,"%d%d",&a,&b);
    printf("the sum is %d+%d=%d",a,b,c);
    fclose(fp);
    return 0;
}

