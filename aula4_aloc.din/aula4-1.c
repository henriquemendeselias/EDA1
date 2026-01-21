//alocação dinamica reserva espaço da memoria em tempo de execução

//3 funções: malloc, calloc e realloc

//malloc aloca memoria para um vetor de n elementos, cada um com um tamanho de bytes

//calloc faz a mesma coisa mas zera

//realloc ajusta o tamanho do vetor apontado pela variavel para o novo tamanho em bytes. porem se na houver memoria livre suficiente apos o bloco original, o vetor precisa ser copiado p outra regiao da memoria. 

#include <stdio.h>
#include <stdlib.h>

int main(){
    //void *malloc (size_t tamanho); - pede o tamanho direto dos bytes

    //void *calloc (size_t nmemb, size_t tamanho_tipo); - primeiro passa a quantidade de casas, e depois pede quanto cada casa quer.

    //void *realloc (void *ponteiro, size_t tamanho);

    char *ponteiro;

    ponteiro = malloc(100 * sizeof(char));

    scanf("%[^\n]", ponteiro);

    printf("endereço de memoria: %p | str: %s\n", ponteiro, ponteiro);

    return 0;
}