#include <stdio.h>
#include <string.h>

struct usuario {
  char nome[254];
  char email[300];
  int idade;
  float altura;
  char apelido[100];
};

int main() {

  char nome[] = "Mathias Santos de Brito";
  nome = "alguem";

  struct usuario mathias;
  strcpy(mathias.nome, "Mathias Santos de Brito");
  strcpy(mathias.email, "mathias.brito@me.com");
  mathias.idade = 18;
  mathias.altura = 1.80;
  strcpy(mathias.apelido, "mathias");

  printf("Os dados da pessoa encontrada são:\n");
  printf("Nome:\t %s\n", mathias.nome);
  printf("E-mail:\t %s\n", mathias.email);
  printf("Idade:\t %d\n", mathias.idade);
  printf("Altura:\t %f\n", mathias.altura);
  printf("Apelido:\t %s\n", mathias.apelido);

  return 0;
}
