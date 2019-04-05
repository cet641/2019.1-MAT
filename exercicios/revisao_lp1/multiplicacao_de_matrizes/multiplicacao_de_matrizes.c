/* Dada as duas matrizes abaixo, faça a multiplicação delas e armazene
 * o resultado em uma terceira matriz. Como sabemos a multiplicação não se
 * dá através da soma das celulas correspondentes. Na multiplicação cada
 * elemento da matriz resultante é obtido pela soma das multiplicações
 * de elementos de uma linha de uma matriz pelos elementos das coluna da
 * outra. O resultado esperado para a multiplicação de matriz1 e matriz2
 * é {{7, 7},{13, 17}}
 */

#include <stdio.h>

#define ORDEM_MATRIZ 2

int main() {
    int matriz1[ORDEM_MATRIZ][ORDEM_MATRIZ] = {
        {1, 2},
        {3, 4}
    };

    int matriz2[ORDEM_MATRIZ][ORDEM_MATRIZ] = {
        {-1, 3},
        {4, 2}
    };

    int matriz_resultado[ORDEM_MATRIZ][ORDEM_MATRIZ] = {{0}};

    /* Escreva a sua Solução Aqui */

    return 0;

}
