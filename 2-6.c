#include <stdio.h>
#include <math.h>

int main(){
	float M, N, C, I;

	printf("Qual o capital incial: ");
	fflush(stdout);
	scanf("%f", &C);
	printf("De quanto foi o periodo de tempo: ");
	fflush(stdout);
	scanf("%f", &N);
	printf("De quanto será o juros: ");
	fflush(stdout);
	scanf("%f", &I);

	M = C *pow(1 + I, N);

	printf("O valor do montante sera de %.2f", M);

	return 0;
}
