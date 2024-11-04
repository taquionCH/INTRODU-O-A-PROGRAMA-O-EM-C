#include <stdio.h>
#include <math.h>

int main(){
	char S;
	float H, PI;
	printf("Qual o sexo(responda com M ou F: ");
	fflush(stdout);
	scanf("%c", &S);
	printf("Qual a altura: ");
	fflush(stdout);
	scanf("%f", &H);

	if(S == 'M'){
		PI = (72.7 * H) - 58;
		printf("o seu peso ideal seria: %.2f", PI);
	}else if(S =='F'){
		PI = (62.1 * H) - 44.7;
		printf("o seu peso ideal seria: %.2f", PI);
	}
	return 0;
}
