#include <stdio.h>
#include <stdlib.h>
int main ()  {
	int random1[8][8];
	int a, b;
	for (a = 0; a < 8; a++)
		for (b = 0; b < 8; b++)
	 		random1[a][b] = rand()%2;
	for (a = 0; a < 8; a++)
	{
		for (b = 0; b < 8; b++)
	  	     printf ("%c " , random1[a][b] ? 'x' : 'o');
		printf("\n");
	}
   return 0;
}
