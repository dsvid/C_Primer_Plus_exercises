/* chapter 3 exercise 6: convert quart of water to molecules */

#include <stdio.h>

int main(void){
  float moleculegrams = 3e-23;

  float quarts;

  printf("how many quarts of water? ");

  scanf("%f", &quarts);

  float grams = quarts*950;

  printf("number of grams is: %f\n", grams);

  printf("number of water molecules is: %f", grams/moleculegrams);

  return 0;
}
