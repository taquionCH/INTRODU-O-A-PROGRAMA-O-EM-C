#include <stdio.h>
#include <math.h>

int main(){
	int HE ,ME ,HS, MS;
	float PAG;

	printf("Qual foi a hora de entrada? ");
	fflush(stdout);
	scanf("%d", &HE );
	printf("Qual foi o minuto de entrada? ");
	fflush(stdout);
	scanf("%d", &ME);
	printf("Qual foi a hora de saida: ");
	fflush(stdout);
	scanf("%d", &HS);
	printf("Qual foi o minuto de saida: ");
	fflush(stdout);
	scanf("%d", &MS);

	PAG = ceil(((HS * 60 + MS) - (HE * 60 + ME)) / 15.0);

	printf("O valor a ser pago é: R$ %.2f\n", PAG);

	return 0;
}
