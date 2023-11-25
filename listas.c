#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct ponto {
    float x, y;
    struct ponto *prox;
}; //estrutura de dados que armazena valores de coordenadas e um ponteiro da estrutura que aponta para a próxima estrutura

typedef struct ponto Ponto; //renomeação do tipo de dado

Ponto *listaPontos; //ponteiro que aponta para o primeiro elemento da lista
int length = 0; //indica o tamanho da lista (quantidade de elementos)

void print(Ponto *p); //impressão de todos os elementos da lista
void addIndex(float x, float y, int z); //inserção de elementos em posições arbitrárias

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
    Ponto *p = (Ponto*) malloc(sizeof(Ponto)); //alocação dinâmica de memória para um novo elemento da lista
    p->x=x;
    p->y=y;

    if(z>length) { //verifica se a posição é maior que o tamanho da lista
        printf("Posição inválida");
    } else {
        if(z==0) { //verifica se a posição é a primeira da lista
            p->prox = listaPontos;
            listaPontos = p;
        } else { //verifica se é qualquer outra posição
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

void print(Ponto *p) { //impressão de forma recursiva a lista
    if(p!=NULL) {
        printf("\nPonto(%.1f;%.1f)", p->x, p->y);
        print(p->prox);
    }
}
