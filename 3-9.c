#include <stdio.h>
#include <math.h>

int main(){
	float TEMPO, VELOCIDADE, CONSUMO, PRECO, DISTANCIA,CUSTO;

	printf("Qual foi o tempo gasto na viagem(em horas): ");
	fflush(stdout);
	scanf("%f", &TEMPO);
	printf("Qual foi a velocidade media(em km/h): ");
	fflush(stdout);
	scanf("%f", &VELOCIDADE);
	printf("Qual foi o consumo médio do automovel (em km/L: ");
	fflush(stdout);
	scanf("%f", &CONSUMO);
	printf("Qual foi o preço do combustivel: ");
	fflush(stdout);
	scanf("%f", &PRECO);

	DISTANCIA = TEMPO * VELOCIDADE;
	CUSTO = (DISTANCIA / CONSUMO)* PRECO;

	if (CUSTO > 200){
		printf("Solicitar reembolso");
	}
	return 0;
}
