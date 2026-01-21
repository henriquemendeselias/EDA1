#include <stdio.h>

int par_de_carac(char *palavra){
    int contador = 0;
    if (*palavra == '\0' || *(palavra + 1) == '\0' || *(palavra + 2) == '\0'){
        return 0;
    }

    if (*palavra == *(palavra + 2)){
        contador += 1;
    } 
    return contador + par_de_carac(palavra +1);
}

int main(){
    char palavra[1000];
    scanf("%s", palavra);
    printf("%d\n", par_de_carac(palavra));

}