#include <stdio.h>
#include <math.h>

int main(){
	float DESVPAD, A, B, MEDIA;

	printf("Qual o valor de A: ");
	fflush(stdout);
	scanf("%f", &A);
	printf("Qual o valor de B: ");
	fflush(stdout);
	scanf("%f", &B);

	MEDIA = (A + B) / 2;
	DESVPAD= sqrt((pow(A - MEDIA, 2) + pow(B - MEDIA, 2)) / 2);

	printf("O desvio padrão será %.2f", DESVPAD);
	return 0;
}
