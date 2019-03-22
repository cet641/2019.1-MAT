#include <stdio.h>

float f(float x) {
  float resultado = 0;
  if(x < 5) {
    resultado = f(x + 1);
    return resultado + x;
  }
  else {
    return 1;
  }
}

int main() {
  float resultado = f(0);
  printf("O resultado é %f", resultado);
}
