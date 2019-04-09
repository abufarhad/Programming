#include <stdio.h>

 int main()
{
int x,y, a[5][5];

printf("\n");
printf("\n");

for (x = 0; x < 5; x++)
{
	for (y = 0; y < 5; y++)
{a[x][y] = x * y;}
}

for (x = 0; x < 5; x++)
{
	for (y = 0; y < 5; y++)
{	printf ("\t%d\t",a[x][y]);}

printf("\n");
	}
	return 0;
}
