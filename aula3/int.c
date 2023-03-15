#include <stdio.h>

int main(void) {
  int i;

  printf("O tamanho de i(int): %zu bytes / %zu bits\n", sizeof i, sizeof i*8);
  printf("Valor de i: %d\n", i);

  return 0;
}
