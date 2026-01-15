// tipo void para ponteiro
// void *v; -> ponteiro que pode ser de qualquer tipo, desde que na hora de usa-lo vc modifique: *(int*)v, ele nao se torna int, apenas converte pra linha em especifico. vc apenas força

#include <stdio.h>

int main(){
    int i = 10;
    int *p;
    void *v;
    v = &i;
    printf("%d\n", *(int*)v); //10
    return 0;
}