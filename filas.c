#include <stdio.h>
#include <stdlib.h>

struct pessoa{
    int senha;
    struct pessoa *prox
}; //cria��o e defini��o da estrutura

typedef struct pessoa Pessoa; //renomea��o

Pessoa *fila; // ponteiro que refencia o in�cio da fila

void add(int senha); //fun��o de inser��o
void rem(); //fun��o de remo��o
void imprimir(Pessoa *f); // fun��o de impress�o

int main() {
    add(2);
    add(3);
    add(4);
    rem();

    Pessoa *filaAux = fila; //ponteiro auxiliar utilizado como par�metro na fun��o principal
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
        imprimir(f->prox); //par�metro como sendo o pr�ximo ponteiro, com uso da recursividade
    }
}
