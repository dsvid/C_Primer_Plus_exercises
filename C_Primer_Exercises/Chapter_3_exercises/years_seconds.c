/* requests age in years and then prints that in seconds */

#include <stdio.h>

int main(void){
  int years;
  printf("please enter your age in years: ");
  scanf("%d", &years);    // take an integer as input and put it into variable years

  float multiplier = 3.156e7;


  printf("multiplier is: %f\n", multiplier);
  printf("your age in seconds = %.2f", years*multiplier);

  return 0;
}
