#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 2

struct personagem {
  char nome[100];
  float x;
  float y;
  float velocidade;
};


void desenhar_personagem(struct personagem p) {
  printf("Dados atuais do Personagem %s:\n", p.nome);
  printf("x: %f, y: %f, velocidade: %f\n", p.x, p.y, p.velocidade);
}

struct personagem seguir(struct personagem p) {
  p.x++;
  return p;
}

struct personagem voltar(struct personagem p) {
  p.x--;
  return p;
}

struct personagem subir(struct personagem p) {
  p.y++;
  return p;
}

struct personagem descer(struct personagem p) {
  p.y--;
  return p;
}

char ler_teclado() {
  char c;
  printf("> ");
  scanf(" %c", &c);;
  return c;
}


struct personagem processar_tecla(char tecla, struct personagem p) {
  switch(tecla) {
    case 'w':
      printf("Subindo...\n");
      return subir(p);
      break;
    case  's':
      printf("Descendo...\n");
      return descer(p);
      break;
    case 'a':
      printf("Voltando...\n");
      return voltar(p);
      break;
    case 'd':
      printf("Seguindo...\n");
      return seguir(p);
      break;
    default:
      return p;
  }
}

int main() {

  struct personagem mathias;
  strcpy(mathias.nome, "Mathias");
  mathias.x = 0;
  mathias.y = 0;
  mathias.velocidade = 0;

  desenhar_personagem(mathias);

  while(TRUE) {
    char tecla = ler_teclado();
    printf("A tecla pressionada foi: %c\n", tecla);
    mathias = processar_tecla(tecla, mathias);
    desenhar_personagem(mathias);
  }

  return 0;
}
