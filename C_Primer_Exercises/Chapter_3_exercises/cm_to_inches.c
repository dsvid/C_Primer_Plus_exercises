// converts cm to inches

#include <stdio.h>

int main(void){
  int cm;

  printf("Please enter your height in cm: ");
  scanf("%d", &cm);

  float converter = 1/2.54;

  printf("%d centimeters is %.2f inches", cm, cm*converter);

  return 0;
}
