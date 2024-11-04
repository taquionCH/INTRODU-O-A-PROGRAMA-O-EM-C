#include <stdio.h>
#include<math.h>

int main(){
	float CL;

	printf("qual o valor da conta de luz: ");
	fflush(stdout);
	scanf("%f", &CL);

	if(CL > 50){
		printf("Você está gastando muito");
	}
	return 0;
}
