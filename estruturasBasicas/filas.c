#include <stdio.h>
#include <stdlib.h>

struct pessoa{
    int senha;
    struct pessoa *prox
};

typedef struct pessoa Pessoa;

Pessoa *fila;

void add(int senha);
void rem(); 
void print(Pessoa *f);

int main() {
    add(2);
    add(3);
    add(4);
    rem();

    Pessoa *filaAux = fila; 
    print(filaAux);
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
        fila = fila->prox; 
    }
}

void print(Pessoa *f) {
    if(f!=NULL) {
        printf("Senha: %d\n", f->senha);
        print(f->prox);
    }
}
