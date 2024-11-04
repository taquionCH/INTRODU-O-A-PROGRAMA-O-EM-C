#include <stdio.h>
#include <math.h>

int main(){
	float R, H, REND, LATA, PR, AREA_TAMPA, AREA_LATERAL,AREA, TOTAL, p=3.14;

	printf("Qual o raio do tambor(em metros): ");
	fflush(stdout);
	scanf("%f", &R);
	printf("Qual a altura do tambor(em metros): ");
	fflush(stdout);
	scanf("%f", &H);
	printf("Qual o rendimento da tinta em (metros quadrados): ");
	fflush(stdout);
	scanf("%f", &REND);
	printf("Qual o tamanho da lata(em litros): ");
	fflush(stdout);
	scanf("%f", &LATA);
	printf("Qual o preço da lata: ");
	fflush(stdout);
	scanf("%f", &PR);

	AREA_TAMPA = p*pow(R, 2);
	AREA_LATERAL = 2*p*R*H;
	AREA = 2 * AREA_TAMPA * AREA_LATERAL;
	TOTAL = ceil((AREA/REND)/LATA) * PR;

	printf("O valor será de %.2f reais", TOTAL);

	return 0;
}
