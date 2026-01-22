#include <stdio.h>

void verificaBissexto(int *ano, int *ehBissexto) {
    if ((*ano % 400 == 0) || (*ano % 4 == 0 && *ano % 100 != 0)) {
        *ehBissexto = 1; 
    } else {
        *ehBissexto = 0; 
    }
}

void validaEntrada(int *dia, int *ehBissexto, int *valido) {
    int maxDias;
    
    if (*ehBissexto == 1) {
        maxDias = 366;
    } else {
        maxDias = 365;
    }

    if (*dia >= 1 && *dia <= maxDias) {
        *valido = 1;
    } else {
        *valido = 0;
    }
}

void calculaDiaMes(int *diaDoAno, int *ehBissexto, int *diaFinal, int *mesFinal) {
    int diasPorMes[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (*ehBissexto == 1) {
        diasPorMes[2] = 29;
    }

    int diasRestantes = *diaDoAno;
    int mesAtual = 1;

    while (diasRestantes > diasPorMes[mesAtual]) {
        diasRestantes = diasRestantes - diasPorMes[mesAtual];
        mesAtual++;
    }

    *diaFinal = diasRestantes;
    *mesFinal = mesAtual;
}

int main() {
    int diaEntrada, anoEntrada;
    int bissexto, entradaValida;
    int diaResultado, mesResultado;

    scanf("%d %d", &diaEntrada, &anoEntrada);

    verificaBissexto(&anoEntrada, &bissexto);

    validaEntrada(&diaEntrada, &bissexto, &entradaValida);

    if (entradaValida == 1) {
        calculaDiaMes(&diaEntrada, &bissexto, &diaResultado, &mesResultado);
        printf("%.2d/%.2d/%.4d\n", diaResultado, mesResultado, anoEntrada);
    } else {
        printf("Entradas invalidas!\n");
    }

    return 0;
}