#include <stdio.h>
#include <math.h>

int main() {
	    float CAPITAL, TAXA, MONTANTE;
	    int TEMPO;

	    printf("Qual o capital inicial: ");
	    fflush(stdout);
	    scanf("%f", &CAPITAL);
	    printf("Quando tempo (em anos): ");
	    fflush(stdout);
	    scanf("%d", &TEMPO);
	    printf("Qual a taxa de juros (em decimal): ");
	    fflush(stdout);
	    scanf("%f", &TAXA);

	    MONTANTE = CAPITAL * pow(1 + TAXA, TEMPO);

	    printf("O montante ao final do período será: %.2f\n", MONTANTE);

	    if (MONTANTE >= 2 * CAPITAL) {
	        printf("Investimento seguro\n");
	    } else {
	        printf("Investimento sem segurança\n");
	    }
	    return 0;
}

