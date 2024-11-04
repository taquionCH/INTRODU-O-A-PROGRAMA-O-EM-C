#include <stdio.h>
#include <math.h>

int main(){
	float DESC, PRECO, PRECOF;
	printf("Qual o valor original do produto: ");
	fflush(stdout);
	scanf("%f", &PRECO);
	printf("Após o desconto, qual o valor do produto:  ");
	fflush(stdout);
	scanf("%f", &PRECOF);

	DESC =((PRECO - PRECOF) / PRECO) * 100;

	printf("O desconto foi de: %.2f%%", DESC);

	return 0;
}
