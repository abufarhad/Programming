#include<stdio.h>
int main()
{
    FILE*fp;
    int i,k,j;
    fp=fopen("newfile.txt","w");
    scanf("%d %d",&i,&j);  k=i+j;
    fprintf(fp,"%d+%d=%d",i,j,k);
    fclose(fp);

    //for(i=65;i<=90;i++)
    fp=fopen("newfile.txt","r");
    fscanf(fp,"%d %d",&i,&j);
    k=i+j;
    printf("%d+%d=%d  ",i,j,k);
    fclose(fp);

    return 0;

}

