/*
Escreva um programa que recebe uma matriz como entrada, onde cada linha da matriz corresponde aos dados de um indivíduo. Após a análise de altura e idade imprimir na tela cada um dos número de identificação e a indicação se ele foi aceito ou não. Um indivíduo só será aceito se sua altura for maior que 1,40 e a sua idade maior que 14.
*/

#include <stdio.h>

int informacoes[5][3] = {
  1, 14, 165,
  2, 12, 120,
  3, 16, 158,
  4, 18, 180,
  5, 10, 150
};

int main() {
  for(int i = 0; i < 5; i++) {
    int id     = informacoes[i][0];
    int idade  = informacoes[i][1];
    int altura = informacoes[i][2];

    if(idade > 14 && altura > 140) {
      printf("Participante %d aceito!\n", id);
    }
    else {
      printf("Participante %d não foi aceito!\n", id);
    }
  }
}
