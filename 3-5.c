#include <stdio.h>
#include <math.h>

int main(){
	int NUM_INT, MODULO;


	printf("Escreva um numero inteiro(positivo ou negativo)");
	fflush(stdout);
	scanf("%f", &NUM_INT);

	if (NUM_INT < 0){
		MODULO = -NUM_INT;
	}else {
		MODULO = NUM_INT;
	}
	printf("O módulo é: %d\n", MODULO);
}
