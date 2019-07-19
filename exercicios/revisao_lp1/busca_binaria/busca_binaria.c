#include <stdio.h>

int main(void) {
  int v[] = { 3, 4, 5, 2, 1, 10, 6, 13};
  int n = 8;
  int inicio = 0, fim = 7;

  int buscado = 5;

  while(inicio <= fim) {
    int meio = (inicio + fim)/2;

    if (buscado == v[meio]) {
      printf("Número encontrado na posição %d\n", meio);
      return 0;
    }

    if (buscado < v[meio]) {
      fim = meio - 1;
    }
    else {
      inicio = meio + 1;
    }
  }

  return 0;
}
