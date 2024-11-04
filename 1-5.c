#include <stdio.h>
#include <math.h>

int main(){
	float PAG, PR, D;

	printf("Qual o preço do produto: ");
	fflush(stdout);
	scanf("%f", &PR);
	printf("Qual será a porcentagem de desconto:  ");
	fflush(stdout);
	scanf("%f", &D);

	PAG = PR - (PR *(D/100));

	printf("O valor a ser pago vai ser de: %2.f reais.", PAG);

	return 0;
}
