#include <stdio.h>
#include <math.h>

int main(){
	int QTDGADO, QTDHERD, SOBRA;

	printf("Quantidade de cabeças de gado: ");
	fflush(stdout);
	scanf("%d", &QTDGADO);
	printf("Quantidade de herdeiros: ");
	fflush(stdout);
	scanf("%d", &QTDHERD);

	SOBRA = QTDGADO % QTDHERD;

	printf("Após a divisão sobrarão %d cabeças de gado.", SOBRA);

	return 0;
}
