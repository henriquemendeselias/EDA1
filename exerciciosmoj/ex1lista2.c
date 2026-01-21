#include <stdio.h>

void trocax_por_y_c_recursao(char *palavra){
    if (*palavra == '\0'){
        return;
    }

    if (*palavra == 'x'){
        *palavra = 'y';
    }

    trocax_por_y_c_recursao(palavra +1);
}

int main(){
    char palavra[1000];
    palavra[0] = '\0';
    scanf("%s", palavra);
    trocax_por_y_c_recursao(palavra);
    printf("%s\n", palavra);
    return 0;
}