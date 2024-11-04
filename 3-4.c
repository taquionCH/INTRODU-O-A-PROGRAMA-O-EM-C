#include <stdio.h>
#include <math.h>

int main(){
	float VAL_GASTO, CAP_TANQ;
	char TIPO_CARRO;

	printf("Qual o tipo de carro (A=alcool, G=gasolina)");
	fflush(stdout);
	scanf("%c", &TIPO_CARRO);
	printf("De quanto é a capacidade do tanque: ");
	fflush(stdout);
	scanf("%f", &CAP_TANQ);

	if (TIPO_CARRO == 'A'){
		VAL_GASTO = CAP_TANQ * 3.70;
		printf("O valor gasto será de %.2f", VAL_GASTO);
	}else if(TIPO_CARRO =='G'){
		VAL_GASTO =CAP_TANQ * 4.90;
		printf("O valor gasto será de %.2f reais", CAP_TANQ);
	}
}
