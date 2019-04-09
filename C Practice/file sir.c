#include <stdio.h>

int main()
   {
int a, b = 0;
int c[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
for  (a = 0; a < 10; ++a)
if ((c[a] % 2)== 0);
b += c[a];
printf ("%d", b);
return 0;
   }

