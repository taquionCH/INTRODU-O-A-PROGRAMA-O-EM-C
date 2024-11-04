#include <stdio.h>
#include <math.h>

int main() {
    int HORA_E, MIN_E, HORA_S, MIN_S;
    int TOTAL_MINUTOS_ENTRADA, TOTAL_MINUTOS_SAIDA, TEMPO_ESTACIONADO;
    int HORAS_COBRADAS;
    float VAL_PAGO;

    printf("Informe a hora de entrada: ");
    fflush(stdout);
    scanf("%d", &HORA_E);
    printf("Informe o minuto de entrada: ");
    fflush(stdout);
    scanf("%d", &MIN_E);
    printf("Informe a hora de saída: ");
    fflush(stdout);
    scanf("%d", &HORA_S);
    printf("Informe o minuto de saída: ");
    fflush(stdout);
    scanf("%d", &MIN_S);


    TOTAL_MINUTOS_ENTRADA = HORA_E * 60 + MIN_E;
    TOTAL_MINUTOS_SAIDA = HORA_S * 60 + MIN_S;


    if (TOTAL_MINUTOS_SAIDA >= TOTAL_MINUTOS_ENTRADA) {
        TEMPO_ESTACIONADO = TOTAL_MINUTOS_SAIDA - TOTAL_MINUTOS_ENTRADA;
    } else {

        TEMPO_ESTACIONADO = (24 * 60 - TOTAL_MINUTOS_ENTRADA) + TOTAL_MINUTOS_SAIDA;
    }


    HORAS_COBRADAS = (int)ceil(TEMPO_ESTACIONADO / 60.0);


    VAL_PAGO = HORAS_COBRADAS * 4.0;

    printf("O valor a ser pago pelo estacionamento é: R$ %.2f\n", VAL_PAGO);

    return 0;
}
