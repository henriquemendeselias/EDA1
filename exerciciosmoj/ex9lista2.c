#include <stdio.h>

void move_x(char *palavra){
    if (*palavra == '\0'){
        return;
    }

    if (*palavra != 'x'){
        printf("%c", *palavra);
    }

    move_x(palavra + 1);

    if (*palavra == 'x'){
        printf("%c", *palavra);
    }
}

int main(){
    char palavra[1000];
    scanf("%s", palavra);
    move_x(palavra);
    printf("\n");
    return 0;
}