#include <stdio.h>
  struct cse
  {
      int id;
      char name[20];
      double cg;
  };


  void print (struct cse a[])
  {
     int i;
      for(i=0;i<5;i++)
      {
       printf("\n\nSTUDENT NAME: %s\n",a[i].name);
       printf("STUDENT ID NO: %d\n",a[i].id);
       printf("STUDENT CGPA :%lf\n",a[i].cg);
      }

  }
  int main()
  {
      int i;
      struct cse a[20];
      for(i=0;i<5;i++){
      scanf("%s%d%lf",&a[i].name,&a[i].id,&a[i].cg);}

      print(a);



//i=((a>b)?((a>c)?a:c):((b>c)?b:c));
//printf("%d " ,a&&b&&c);
//printf("%d %d\n",b,b=++a);
//printf("%d %d",++a,++b);
//for(ch='A';ch<='Z';ch++)
//printf("%c\n",ch);
return 0;
    }


