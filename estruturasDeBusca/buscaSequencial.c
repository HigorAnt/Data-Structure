#include <stdio.h>

int v[10] = {5,8,2,50,34,74,97,10,25,1};

int main() {
	int num = 10;

	for(int i = 0; i < 10; i++){
		if(v[i] == num){
			printf("Elemento encontrado na posição: %d\n",i);
		}
	}
	return 0;
}
