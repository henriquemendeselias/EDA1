#include <stdio.h>

int main(){
    int n;
    int contador = 3;

    scanf("%d", &n);

    if  ( contador >= n)
            printf("o contador eh maior que o input\n");
    else
        while (contador < n)
        {
            printf("O contador esta em: %d\n", contador);
            contador = contador + 1;
        }

    int num;
    int contador2 = 3;

    scanf("%d", &num);
    do {

        printf("o contador esta em: %d\n", contador2);
        contador2 = contador2 + 1;

    }
    while (contador2 < num);
        
    return 0;
}