#include<stdio.h>
int main()
{
  float nextNum, sum = 0.0;
  int count = 0, totalNumbers;
  scanf("%d", &totalNumbers);

  while (count < totalNumbers)
  {
    scanf("%f", &nextNum);
    sum += nextNum;
    count++;
  }

  printf("Sum was %f\n",sum);
  printf("Mean was %f\n",sum/count);
  return 0;
}
