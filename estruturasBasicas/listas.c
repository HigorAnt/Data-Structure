#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct ponto {
    float x, y;
    struct ponto *prox;
};

typedef struct ponto Ponto;

Ponto *listaPontos;
int length = 0;

void print(Ponto *p);
void addIndex(float x, float y, int z);

int main() {
    setlocale(LC_ALL, "Portuguese");

    addIndex(1,1,0);
    addIndex(1,2,1);
    addIndex(2,1,2);
    addIndex(2,2,3);
    addIndex(0,2,4);

    Ponto *auxLista = listaPontos;
    print(auxLista);

    return 0;
}


void addIndex(float x, float y, int z) {
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));
    p->x=x;
    p->y=y;

    if(z>length) {
        printf("Posi��o inv�lida");
    } else {
        if(z==0) {
            p->prox = listaPontos;
            listaPontos = p;
        } else {
            Ponto *listaAux = listaPontos;
            int i=0;
            while(i!=z-1) {
                listaAux = listaAux->prox;
                i++;
            }
            p->prox = listaAux->prox;
            listaAux->prox = p;
        }
    }
    length++;
}

void print(Ponto *p) {
    if(p!=NULL) {
        printf("\nPonto(%.1f;%.1f)", p->x, p->y);
        print(p->prox);
    }
}
