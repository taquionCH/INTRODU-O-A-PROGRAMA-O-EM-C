#include <stdio.h>
#include <math.h>

int main(){
	float AREA, L;

	printf("Qual a dimensão da sala: ");
	fflush(stdout);
	scanf("%f", &L);

	AREA = pow(L, 2);

	printf("A area da sala será de %2.f metros quadrados.", AREA);

	return 0;
}
