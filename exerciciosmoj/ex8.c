#include <stdio.h>

int main(){

    char palavra[100];
    int i = 0;
    scanf(" %[^\n]", palavra);

    while(palavra[i] != '\0') {
        i++;
    }
    i--;

    while (i >= 0 ){
        printf("%c - ", palavra[i]);
        printf("%d\n", palavra[i]);
        i--;
    }
    return 0;
}