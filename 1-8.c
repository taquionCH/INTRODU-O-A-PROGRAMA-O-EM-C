#include <stdio.h>
#include <math.h>

int main(){
	float  AT, LT, AP, LP;
	int QTD;

	printf("De quanto e a altura do tijolo: ");
	fflush(stdout);
	scanf("%f", &AT);
	printf("De quanto e a largura do tijolo: ");
	fflush(stdout);
	scanf("%f", &LT);
	printf("De quanto e a altura da parede: ");
	fflush(stdout);
	scanf("%f", &AP);
	printf("De quanto e a largura da parede: ");
	fflush(stdout);
	scanf("%f", &LP);

	QTD = ceil((AP * LP) / (AT * LT));

	printf("A quantidade de tijolos para construir essa parede será de: %d\n", QTD);

	return 0;
}
