	#include <stdio.h>
	#include <math.h>

	int main(){
		float TEMPO, VELOCIDADE, CM, PR, DISTANCIA, CUSTO;

		printf("Qual foi o tempo de duração(em horas): ");
		fflush(stdout);
		scanf("%f", &TEMPO);
		printf("Qual a velocidade media(em km/h): ");
		fflush(stdout);
		scanf("%f", &VELOCIDADE);
		printf("De quanto foi o consumo médio(em litros por km): ");
		fflush(stdout);
		scanf("%f", &CM);
		printf("Qual o preço do combustivel(por litro): ");
		fflush(stdout);
		scanf("%f", &PR);

		DISTANCIA = TEMPO * VELOCIDADE;
		CUSTO = (DISTANCIA/ CM) * PR;
		printf("O custo da viagem é: %.2f", CUSTO);

		return 0;
	}
