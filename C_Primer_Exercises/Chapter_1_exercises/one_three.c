// a program to practice one function calling another in C
#include <stdio.h>

void one_three(void); //function prototypes
void two(void);

int main(void){
  printf("starting now: \n");
  one_three();
  printf("done!\n");

  return 0;
}

void one_three(void){
  printf("one\n");
  two();
  printf("three\n");
}

void two(void){
  printf("two\n");
}
