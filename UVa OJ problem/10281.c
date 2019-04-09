#include <stdio.h>

int main() {
  char tmp[20];
  double h = 0, m = 0, s = 0, speed = 0, H, M, S, Speed, km = 0;
  while (gets(tmp) != NULL) {
    if (tmp[8]) sscanf(tmp, "%lf:%lf:%lf %lf", &H, &M, &S, &Speed);
    else sscanf(tmp, "%lf:%lf:%lf", &H, &M, &S);
    if (!tmp[8]) {
      km += (H - h) * speed + (M - m) * speed / 60 + (S - s) * speed / 3600;
      printf("%s %.2lf km\n", tmp, km);
    } else {
      km += (H - h) * speed + (M - m) * speed / 60 + (S - s) * speed / 3600;
    }
    h = H;
    m = M;
    s = S;
    speed = Speed;
  }
  return 0;
}
