#include <stdio.h>

int mult(int n1, int n2)
{
  int r;
  r = n1 * n2;
  return r;
}



int main(void) {
  int res = mult(10 , 20);
  printf("%d", res );
  printf("\nHello World\n");
  return 0;
}