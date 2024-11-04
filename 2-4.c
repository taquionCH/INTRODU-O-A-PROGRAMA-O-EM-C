#include <stdio.h>
#include <math.h>

int main(){
	float AREA, R, P = 3.14;

	printf("Qual o valor do raio do círculo:");
	fflush(stdout);
	scanf("%f", &R);

	AREA = P * pow(R, 2);

	printf("A area do círculo será de %2.f", AREA);

	return 0;
}
