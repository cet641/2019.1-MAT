/*

*/
#include <stdio.h>
#include <math.h>

float area_do_retangulo(float base, float altura) {
  return base * altura;
}

float xquadrado(float x) {
  return pow(x, 2);
}

float integral(float min, float max, float intervalo) {
  /* a integral usando o método do retângulo */
  float area_total = 0;
  for (int i = min; i < max; i += intervalo) {
    float altura = xquadrado(i);
    float area = area_do_retangulo(intervalo, altura);
    area_total += area;
  }

  return area_total;
}

int main() {
  float resultado = integral(0, 10, 1);
  printf("A integral da funçãoi x2 com intervalo de 0 a 1 é %f\n", resultado);

  return 0;
}
