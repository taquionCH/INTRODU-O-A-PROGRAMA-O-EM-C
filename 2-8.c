#include <stdio.h>
#include <math.h>

int main(){
	float L, H, R, LATA, PR, AREA, QTD,TOTAL;

	printf("Qual a largura da parede(em metros): ");
	fflush(stdout);
	scanf("%f", &L);
	printf("Qual a altura da parede(em metros): ");
	fflush(stdout);
	scanf("%f", &H);
	printf("Qual o rendimento da tinta(em metros quadrados): ");
	fflush(stdout);
	scanf("%f", &R);
	printf("Qual o tamanho da lata: ");
	fflush(stdout);
	scanf("%f", &LATA);
	printf("Qual o preço da lata de tinta: ");
	fflush(stdout);
	scanf("%f", &PR);

	AREA = L * H;
	QTD = ceil(AREA /(R * LATA));
	TOTAL = QTD * PR;

	printf("O tamanho da parede é %.2f\n para pintar a parede serão necessárias %.2f\n e o preço vai ser de %.2f", AREA, QTD, TOTAL);

	return 0;
}
