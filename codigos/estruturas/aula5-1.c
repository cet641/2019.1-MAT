#include <stdio.h>

struct particula {
  float pos_x;
  float pos_y;
  float temp;
};

int main() {
  struct particula particula1;
  particula1.pos_x = 3;
  particula1.pos_y = 2;
  particula1.temp = 40;

  printf("A particula tem os seguintes parametros:\n");
  printf("X: %f, Y: %f, TEMP: %f\n", particula1.pos_x, particula1.pos_y, particula1.temp);

  return 0;
}
