#include <stdio.h>
#include<math.h>

int main(){
	float VOL, R, P =3.14;

	printf("Qual o raio do circulo: ");
	fflush(stdout);
	scanf("%f", & R);

	VOL = (4.0/3.0) * P * pow(R, 3);

	printf("O volume do circulo sera %.2f", VOL);

	return 0;
}
