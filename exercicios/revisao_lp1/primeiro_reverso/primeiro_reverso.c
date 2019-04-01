/*
 * Escreva a função primeiro_reverso(str) que imprima a string 'str' na ordem
 * inversa. Para exemplos, compare o arquivo input.in com dados de entrada
 * e como eles devem ficar, em output.ou.
 *
 * Por exemplo, tendo a palavra UESC como entrada, a saída deverá ser CSEU.
 */

#include <stdio.h> 
#include <string.h>

#define BUFFLEN 128

void primeiro_reverso(char str[]) { 
  
  //escreva a solução aqui 
}

int main(void) { 
  
  //mantenha o código abaixo como está
  char str[BUFFLEN];
  while(fgets(str, BUFFLEN, stdin)) {
    primeiro_reverso(str);
  }
  return 0;
} 

