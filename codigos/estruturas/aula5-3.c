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

void seguir(struct personagem p) {
  p.x++;
  desenhar_personagem(p);
}

void voltar(struct personagem p) {
  p.x--;
  desenhar_personagem(p);
}

void subir(struct personagem p) {
  p.y++;
  desenhar_personagem(p);
}

void descer(struct personagem p) {
  p.y--;
  desenhar_personagem(p);
}

char ler_teclado() {
  char c;
  printf("> ");
  scanf(" %c", &c);;
  return c;
}


void processar_tecla(char tecla, struct personagem p) {
  switch(tecla) {
    case 'w':
      printf("Subindo...\n");
      subir(p);
      break;
    case  's':
      printf("Descendo...\n");
      descer(p);
      break;
    case 'a':
      printf("Voltando...\n");
      voltar(p);
      break;
    case 'd':
      printf("Seguindo...\n");
      seguir(p);
      break;
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
    processar_tecla(tecla, mathias);
    //desenhar_personagem(mathias);
  }

  return 0;
}
