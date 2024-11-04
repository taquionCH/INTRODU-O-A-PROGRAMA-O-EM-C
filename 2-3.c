#include <stdio.h>
#include <math.h>

int main(){
	float A ,B ,C, DELTA ,R1 ,R2;
	printf("Valor de A: ");
	fflush(stdout);
	scanf("%f", &A);
	printf("Valor de B: ");
	fflush(stdout);
	scanf("%f", &B);
	printf("valor de C: ");
	fflush(stdout);
	scanf("%f", &C);

	DELTA = pow(B, 2) -4*A*C;

	if(DELTA > 0){
		R1 = (-B + sqrt(DELTA)) / (2 * A);
		R2 = (-B - sqrt(DELTA)) / (2 * A);
		printf("As raizes serão %2.f e %2.f", R1,R2);\
	}else{
		printf("A equação de 2º grau não possui raízes reais!");
	};
	return 0;
}
