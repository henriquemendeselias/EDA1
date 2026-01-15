//recursão

#include <stdio.h>

int fatorial(int numero){
    int resultado = 1;

    for(int i = 1; i <= numero; i++){
        resultado *= i;
    }

    return resultado;
}

int fatorial_c_recursao(int numero){
    if (numero == 1 || numero == 0){
        return 1;
    }
    return numero * fatorial_c_recursao(numero-1);
};



int main(){
    int n;

    scanf("%d", &n);
    printf("%d", fatorial_c_recursao(n));
}
