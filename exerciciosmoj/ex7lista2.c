#include <stdio.h>

long long contar_7(long long n){
    long long contador = 0;
    if (n == 0){
        return 0;
    }

    if (n % 10 == 7){
        contador++;
    }

    return contador + contar_7(n/10);
}

int main(){
    long long n;
    scanf("%lld", &n);
    printf("%lld\n", contar_7(n));
    return 0;
}