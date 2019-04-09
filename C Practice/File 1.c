#include<stdio.h>
int main()
{

    FILE *kajla ,*myfr;
    int a,b;
    kajla=fopen("d:\\mytxt.dat","r");
    //myfr=fopen("d:\\mytxt.dat","w");
    //char input[44];
   // fgets(input,44,input_file);//***************fdof*****************
    //puts(input);
    //fprintf(input,"CSE  15 RUET");
    //fprintf(input,"");
    myfr=fopen("d:\\mytxt2.dat","w");
    fsacnf(kajla,"%d %d",&a,&b);
    fprintf(kajla,"%d",a+b);
    fclose(kajla);
    fclose(myfr);
    return 0;

}
