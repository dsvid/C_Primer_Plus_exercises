// a program that takes a float as input and prints it in various ways

#include <stdio.h>

int main(void){
  float input;
  float hexconstant = 0x0.3p10;

  printf("enter a floating point number:");
  scanf("%f", &input);

  printf("inputted number as a float: %f\nas an exponential: %e\n", input, input);
  printf("here's a thing: %e", hexconstant);
  //printf("and as a hexadecimal: %a", hexconstant);

  return 0;
}
