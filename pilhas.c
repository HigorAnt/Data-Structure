#include <stdio.h>
#include <stdlib.h>

struct prato{
    char cor;
    struct prato *prox
}; //criação e definição da estrutura

typedef struct prato Prato; //renomeação

Prato *pilha; // ponteiro que refencia o início da pilha

void add(int senha); //função de inserção
void rem(); //função de remoção
void imprimir(Prato *p); // função de impressão

int main() {
    add('w');
    add('r');
    add('g');
    add('b');
    rem();

    Prato *pilhaAux = pilha; //ponteiro auxiliar utilizado como parâmetro na função principal
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
        pilha = pilha->prox; //o ponteiro que aponta para o primeiro item da lista agora aponta para o segundo
    }
}

void imprimir(Prato *p) {
    if(p!=NULL) {
        printf("Cor do prato: %c\n", p->cor);
        imprimir(p->prox); //parâmetro como sendo o próximo ponteiro, com uso da recursividade
    }
}
