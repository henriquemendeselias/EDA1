#include <stdio.h>


void inverter_string(char *palavra){
    if (*palavra == '\0'){
        return;
    }

    inverter_string(palavra+1);
    printf("%c", *palavra);    
}


int main(){
    char palavra[1000];
    scanf("%s", palavra);
    inverter_string(palavra);
    printf("\n");
    return 0;
}