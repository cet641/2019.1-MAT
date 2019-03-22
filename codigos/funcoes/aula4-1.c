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

float integral_for(float min, float max, float intervalo) {
  /* a integral usando o método do retângulo */
  float area_total = 0;
  for (int i = min; i < max; i += intervalo) {
    float altura = xquadrado(i);
    float area = area_do_retangulo(intervalo, altura);
    area_total += area;
  }
  return area_total;
}

float integral_while(float min, float max, float intervalo) {
  float x_atual = min;
  float x_max = max;
  float area_total = 0;

  while(x_atual < x_max) {
    float altura = xquadrado(x_atual);
    float area = area_do_retangulo(intervalo, altura);
    area_total += area;
    x_atual += intervalo;
  }

  return area_total;
}

int main() {
  // float resultado = integral_for(0, 10, 0.9);
  // printf("A integral com FOR da função x2 com intervalo 1 é %f\n", resultado);

  float resultado = integral_while(0, 10, 0.00000000001);
  printf("A integral com WHILE da função x2 com intervalo 1 é %f\n", resultado);

  return 0;
}
