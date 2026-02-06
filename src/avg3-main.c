#include <stdio.h>

int avg3(int x, int y, int z) {
  int sum = x + y + z;
  return sum / 3;
}

int main() {
  int a = 10;
  int b = 20;
  int c = 30;
  int d = avg3(a, b, c);
  printf("average of %d and %d and %d is %d\n", a, b, c, d);
  return 0;
}