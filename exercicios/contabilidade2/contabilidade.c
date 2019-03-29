/* Crie uma função para identificar o mês que mais vende */

#include <stdio.h>
#include <stdlib.h>

struct Nota {
    int mes;
    int ano;
    char tipo;
    float valor;
};

struct Relatorio {
    int ano;
    float total;
    float media_mensal;
};


struct Nota* carregar_notas(char*, int numero_de_notas);
void imprimir_notas(struct Nota*, int);
int contar_notas(char*);

/* funções da solução */
struct Relatorio gerar_relatorio(struct Nota*, int, int);
void imprime_relatorio(struct Relatorio);

int main() {
    int numero_de_notas = 0;
    char* nome_do_arquivo = "notas_fiscais.in";
    struct Nota* notas_fiscais;
    
    numero_de_notas = contar_notas(nome_do_arquivo);
    notas_fiscais = carregar_notas(nome_do_arquivo, numero_de_notas);
    //imprimir_notas(notas_fiscais, numero_de_notas);
    gerar_relatorio(notas_fiscais, 18, numero_de_notas);

    return 0;
}

struct Relatorio gerar_relatorio(struct Nota* notas, int ano, int numero_de_notas) {
    
    float subtotal = 0.0;
    int contador = 0;
    float media;

    for(int i = 0; i < numero_de_notas; i++) {
        if(notas[i].ano == ano) {
            subtotal += notas[i].valor;
            contador++;
        }
    }

    media = subtotal / contador;

    struct Relatorio r;
    r.ano = ano;
    r.total = subtotal;
    r.media_mensal = media;

    imprime_relatorio(r);

    return r;
}

void imprime_relatorio(struct Relatorio relatorio) {
    printf("#### Relatório #####\n");
    printf("Ano: %d\n", relatorio.ano);
    printf("Total: %f\n", relatorio.total);
    printf("Média: %f\n", relatorio.media_mensal);
    printf("#### Fim ####\n");
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

