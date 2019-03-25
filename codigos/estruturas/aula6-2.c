/* sintaxe e usos de ponteiros e referências */
#include <stdio.h>

struct ponto {
    float x;
    float y;
};


void multiplos_retornos(int *x, int *y) {
    *x = *x + *y;
    *y = *x;
}

void atribui_ponteiro(int **x, int **y) {
    *x = *y;
}

void imprime_ponteiros(int *x, int *y) {
    printf("x aponta para -> %p\n", x);
    printf("y aponta para -> %p\n", y);
}

void imprime_ponto(struct ponto p) {
    printf("Ponto{x=%f; y=%f}", p.x, p.y);
}

int main() {
    int a = 10;
    int b = 20;
    struct ponto p;
    p.x = 10;
    p.y = 20;

    imprime_ponteiros(&a, &b);
    multiplos_retornos(&a, &b);
    printf("multiplos_retornos() -> a = %d, b = %d\n", a, b);
    
    int *ap = &a;
    int *bp = &b;

    atribui_ponteiro(&ap, &bp);
    imprime_ponteiros(ap, bp);

    return 0;
} 

