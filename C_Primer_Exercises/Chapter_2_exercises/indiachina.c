// a program that prints some more stuff, with functions

#include <stdio.h>

void br(void);    // function prototypes
void ic(void);

int main(void){
  br();
  printf(", ");
  ic();
  printf("\n");
  ic();
  printf(",\n");
  br();
  printf("\n");
}

void br(void){
  printf("Brazil, Russia");
}

void ic(void){
  printf("India, China");
}
