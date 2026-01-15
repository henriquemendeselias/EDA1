#include <stdio.h>

int main(){
    char palavra[1000];
    int i = 0;
    scanf("%s", palavra);
    while(palavra[i] != '\0') {
        i++;
    }

    printf("%d", i);
    return 0;
}