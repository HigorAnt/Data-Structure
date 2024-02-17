#include <stdio.h>
#include <stdlib.h>

struct prato{
    char cor;
    struct prato *prox
};

typedef struct prato Prato;

Prato *pilha;

void add(int senha);
void rem();
void imprimir(Prato *p);

int main() {
    add('w');
    add('r');
    add('g');
    add('b');
    rem();

    Prato *pilhaAux = pilha;
    imprimir(pilhaAux);
}

void add(int cor) {
    Prato *p = (Prato*) malloc(sizeof(Prato));
    p->cor = cor;
    p->prox = pilha;
    pilha = p;
}

void rem() {
    if(pilha==NULL) {
        printf("Pilha Vazia");
    } else {
        pilha = pilha->prox;
    }
}

void imprimir(Prato *p) {
    if(p!=NULL) {
        printf("Cor do prato: %c\n", p->cor);
        imprimir(p->prox);
    }
}