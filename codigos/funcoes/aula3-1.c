/*
   Criar uma função que recebe dois números de ponto
   flutuante indicando a altura e a largura de um
   retângulo e retorne a área.
*/

float area_do_quadrado(float lado) {
  return lado*lado;
}

float area_do_retangulo(float base, float altura) {
  return base * altura;
}

int main() {
  float resultado = area_do_retangulo(10, 5);

  return 0;
}
