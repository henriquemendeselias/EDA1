// é possivel atribuir NULL a um ponteiro que ainda nao esta apontando pra nada: *p = NULL; ele nao fica com lixo de memoria. podendo usar um if else pra ver se o enderenco dele é NULL: if (p == NULL){}.....

#include <stdio.h>

int main(){

    int i =10;
    int *p;
    p = &i;

    printf("valor antes: %d e %d\n", i, *p);
    *p = 20; //aqui ele vai alterar o valor de i, pois esta indo direto no seu endereço de memoria
    printf("valor depois: %d e %d\n", i, *p);
    return 0;
}