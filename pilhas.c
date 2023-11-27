#include <stdio.h>
#include <stdlib.h>

struct prato{
    char cor;
    struct prato *prox
}; //cria��o e defini��o da estrutura

typedef struct prato Prato; //renomea��o

Prato *pilha; // ponteiro que refencia o in�cio da pilha

void add(int senha); //fun��o de inser��o
void rem(); //fun��o de remo��o
void imprimir(Prato *p); // fun��o de impress�o

int main() {
    add('w');
    add('r');
    add('g');
    add('b');
    rem();

    Prato *pilhaAux = pilha; //ponteiro auxiliar utilizado como par�metro na fun��o principal
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
        imprimir(p->prox); //par�metro como sendo o pr�ximo ponteiro, com uso da recursividade
    }
}
