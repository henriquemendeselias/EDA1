//operações com ponteiro

#include <stdio.h>

int main(){
    int i = 1;
    int *p;
    p = &i;
    int conta = *p * 80;
    printf("%d\n", conta); //80
    return 0;
}