#include <stdio.h>
#include <math.h>

int main(){
	float CAIXA, PRECO;
	int QTDE;


	printf("Quantidade de dinheiro em caixa: ");
	fflush(stdout);
	scanf("%f", &CAIXA);
	printf("Quantidade de produtos a ser comprada: ");
	fflush(stdout);
	scanf("%d", &QTDE);
	printf("Preço de cada unidade ");
	fflush(stdout);
	scanf("%f", &PRECO);

	PRECO = QTDE * PRECO;


	if (PRECO > (0.8 * CAIXA) ){
		PRECO = (PRECO / 3 ) *1.10;
		printf("Compra parcelada em um total de 3 parcelas de %.2f, reais", PRECO);
	}else {
		PRECO = PRECO* 0.95;
		printf("Compra a vista com desconto, saindo pelo valor de %.2f", PRECO );
	}
	return 0;
}
