/* a program that converts cups to pints, ounces, tablespoons, and teaspoons*/
#include <stdio.h>

int main(void){
  float cups;
  printf("Please input volume in cups: ");

  scanf("%f", &cups);

  printf("%.2f cups = %.2f pints = %.2f ounces = %.2f tablespoons = %.2f teaspoons", cups, cups/2, cups*8, cups*16, cups*48);

  return 0;
}
