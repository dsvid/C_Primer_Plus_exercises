#include <stdio.h>

void smile(void); // function prototypes

int main(void){
  for (int i=0; i<3; i++){
    smile();
  }
  printf("\n");
  for (int i=0; i<2; i++){
    smile();
  }
  printf("\n");
  smile();
  printf("\n");
}

void smile(void){
  printf("Smile!");
}
