#include <stdio.h>
#include <math.h>

int main(){
	int NUM;

	printf("Escreva um numero: ");
	fflush(stdout);
	scanf("%d", &NUM);

	if (NUM % 2 == 0){
		printf("O numero %d é par", NUM);
	}else {
		printf("O numero %d é par", NUM);
	}
	return 0;s
}
