/* Neste exercicío você deve completar o programa abaixo de modo que:
 * 1. ele funcione. 
 * 2. Depois de fazê-lo funcionar, crie uma estrutura do tipo 'Relatório'
 *    contendo os campos, ano, total e media_mensal, bem como uma função para
 *    gerar o relatório e outra para imprimí-lo na tela. A função para calcular
 *    o relatório deve recer as notas e o ano a ser calculado e imprimir o 
 *    relatório na tela. 
 * 3. Uma função para imprimir o relatório na tela deve ser criada. */


#include <stdio.h>
#include <stdlib.h>

struct Nota {
    int mes;
    int ano;
    char tipo;
    float valor;
};

struct Nota* carregar_notas(char*, int);
void imprimir_notas(struct Nota*, int);
int contar_notas(char*);

int main() {
    int numero_de_notas = 0;
    char* nome_do_arquivo = "notas_fiscais.in";
    struct Nota* notas_fiscais;
    
    numero_de_notas = contar_notas(nome_do_arquivo);
    notas_fiscais = carregar_notas(nome_do_arquivo, numero_de_notas);
    imprimir_notas(notas_fiscais, numero_de_notas);

    return 0;
}

struct Nota* carregar_notas(char *arquivo, int numero_de_notas) {
    FILE* fp;


    fp = fopen(arquivo, "r");
    if(!fp) {
       printf("Erro abrindo arquivo! Encerrando...\n");
       exit(1);
    } 

    
    struct Nota* notas = (struct Nota*)malloc(sizeof(struct Nota) * numero_de_notas);

    for(int i = 0; i < numero_de_notas; i++) {
        fscanf(fp, "%d %d %c %f\n", &notas[i].mes, &notas[i].ano, &notas[i].tipo, &notas[i].valor);
    }

    fclose(fp);

    return notas;
}

int contar_notas(char* arquivo) {
    int numero_de_linhas = 0;
    FILE* fp = fopen(arquivo, "r");

    while(!feof(fp)) {
        char c;
        c = fgetc(fp);
        if(c == '\n') {
           numero_de_linhas++; 
        }
    }

    fclose(fp);

    return numero_de_linhas;
}

void imprimir_notas(struct Nota* notas, int numero_de_notas) {
    for(int i = 0; i < numero_de_notas; i++) {
        printf("Mês: %-10d Ano: %-10d Tipo: %-10c Valor: %-10f\n", notas[i].mes, notas[i].ano, notas[i].tipo, notas[i].valor);
    }
}

