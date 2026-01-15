//ponteiro é uma variavel q armazena um endereço de memória
// pode ser declarada com um '*' antes
// o '&' também é utilizado como "endereço de memoeria de {var}"


#include <stdio.h>

int main(){
    int *p; //p é um ponteiro
    int i = 0;
    p = &i; // p recebeu o endereço de memoria de i, não o valor 
    printf("%p\n", p); //%p pra printar endereço de memoria "exemplo: 0x7ffc09f6ed5c"
    return 0;
}