#include <stdio.h>
  struct cse
  {
      int roll;
      char name[20];
      double cg;
  };


  void print (struct cse a[])
  {
     int i;
      for(i=0;i<5;i++)
      {
       printf("\n\nSTUDENT NAME: %s\n",a[i].name);
       printf("STUDENT ROLL NO: %d\n",a[i].roll);
       printf("STUDENT CGPA :%lf\n",a[i].cg);
      }
 print(a);
  }

  int main()
  {
      int i;
      struct cse a[20];
      for(i=0;i<5;i++){
      scanf("%s%d%lf",&a[i].name,&a[i].roll,&a[i].cg);}


return 0;
    }


