#include <stdio.h>
#include <stdlib.h>

struct pessoa{
    int senha;
    struct pessoa *prox
}; //criação e definição da estrutura

typedef struct pessoa Pessoa; //renomeação

Pessoa *fila; // ponteiro que refencia o início da fila

void add(int senha); //função de inserção
void rem(); //função de remoção
void imprimir(Pessoa *f); // função de impressão

int main() {
    add(2);
    add(3);
    add(4);
    rem();

    Pessoa *filaAux = fila; //ponteiro auxiliar utilizado como parâmetro na função principal
    imprimir(filaAux);
}

void add(int senha) {
    Pessoa *p = (Pessoa*) malloc(sizeof(Pessoa));
    p->senha = senha;
    p->prox = NULL;

    if(fila==NULL) {
        fila = p;
    } else {
        Pessoa *filaAux = fila;
        while(filaAux->prox!=NULL) {
            filaAux = filaAux->prox;
        }
        filaAux->prox = p;
    }
}

void rem() {
    if(fila==NULL) {
        printf("Fila Vazia");
    } else {
        fila = fila->prox; //o ponteiro que aponta para o primeiro item da lista agora aponta para o segundo
    }
}

void imprimir(Pessoa *f) {
    if(f!=NULL) {
        printf("Senha: %d\n", f->senha);
        imprimir(f->prox); //parâmetro como sendo o próximo ponteiro, com uso da recursividade
    }
}
