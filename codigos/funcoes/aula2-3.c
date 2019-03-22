#include <stdio.h>

int imprimir_relatorio(int x, int y) {
  if (x > 1010) {
    printf("Foi identificado uma anomalia em X");
    return 0;
  }
  if(y < -100) {
    printf("Foi encontrado uma anomalia em Y");
    return 0;
  }
  return 1
}

int main() {

  int x, y, z;

  /* cálculo */
  int situacao = imprimir_relatorio(x, y);

  /* cálculo */
  imprimir_relatorio(x, y);

  /* código */
  imprimir_relatorio(x, y);
}
