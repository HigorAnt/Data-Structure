#include <stdio.h>

int v[50];

int main() {
	int num = 50;
	int comparacoes = 0;
	int continuar = 1;
	int ini = 0;
	int fim = 49;

	for(int i=0;i<50;i++){
		v[i] = i + 1;
	}

	while(continuar==1){
		comparacoes++;
		int pivo=(ini + fim)/2;
		if(v[pivo]==num){
			printf("Elemento encontrado\n");
			continuar = 0;
		} else{
			if(num>v[pivo]){
				ini=pivo+1;
			} else{
				fim=pivo-1;
			}
		}
		if(fim<ini){
			printf("Elemento não encontrado\n");
			continuar = 0;
		}
	}

	printf("Comparações: %d\n",comparacoes);

	return 0;
}
