void main()
{
     FILE*kajla ,*myfr;
    int i,j,a,b,c,dx[100];
    char cx[100][16],ch;
    kajla=fopen("d:\\mytxt2.dat","w");
   srand(time(NULL));
   for(j=0;j<100;j++){
   for(i=0;i<16;i++){
        ch=48+rand()%10;
   fscanf(kajla,"%c",cx[j][i]);
   //fprintf(kajla,"%c",ch);
   }
   fscanf(kajla,"%d",&dx[j]);
   //fprintf(kajla," 0 \n");}
    //fsacnf(kajla,"%d %d",&a,&b);
    //fprintf(kajla,"%d",a+b);
    fclose(kajla);
    //fclose(myfr);
    //return 0;
}
