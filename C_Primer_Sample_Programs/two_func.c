/* two_func.c -- a program using two functions in one file */
#include <stdio.h>

void butler(void);    // function prototype

int main(void)
{
  printf("I will summon the butler function.\n");
  butler();
  printf("Yes. Bring me some tea and writeable DVD's.\n");

  return 0;
}

void butler(void)      // start of function declaration
{
  printf("You rang, sir?\n");
}
