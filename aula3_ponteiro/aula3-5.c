//funções de ponteiro:
//para uma função alterar argumentos, se desejado.:passagem por referencia. quando nao é alterado se chama passagem por valor
//passagem por valor e passagem por referencia existe em todos as linguagens. em C se usa ponteiro para tal.scanf é uma função que recebe um ponteiro e altera valor - passagem por referencia.

//ponteiro e arrays.: *p = p[0]: acessar o primeiro endereço de memoria que p aponta

#include <stdio.h>

int main(){
    int arr[3] = {2,4,8};
    int *p = arr; // *p = p[0] = 2 / p[1] = 4 / p[2] = 8. a diferença no endereço de memoria é 4 bits. 
    return 0;
}