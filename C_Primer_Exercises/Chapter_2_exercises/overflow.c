#include <stdio.h>

int main(void){
  int i, j, k;
  i = 32767;
  j = 65536;
  k = 2147483647;

  printf("here are some integers, %d, %d, %d\n", i, j, k);

  float m, n;

  m = 1123421341432.12341234143;

  printf("here is a float, %f\n", m);

  n = 0.000000000000000034;

  printf("here is a very small float, %1.20f\n", n);

  return 0;
}
