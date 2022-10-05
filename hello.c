#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  srand((unsigned)time(NULL));
  int r = rand() % 100;
  printf("%d", r);
  return 0;
}