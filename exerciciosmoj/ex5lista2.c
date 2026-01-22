#include <stdio.h>

int contar_vogais(char *palavra){
    int contador = 0;

    if (*palavra == '\0'){
        return 0;
    }

    if (*palavra == 'A' || *palavra == 'E' || *palavra == 'I' || *palavra == 'O' || *palavra == 'U'){
        contador++;
    }

    return contador + contar_vogais(palavra+1);
}

int main(){
    char palavra[1000];
    scanf("%s", palavra);
    printf("%d\n", contar_vogais(palavra));
    return 0;
}