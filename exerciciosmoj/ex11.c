#include <stdio.h>

int main(){
    char frase[101];
    int j = 0;

    while ( scanf(" %[^\n]", frase) != EOF ) {
        int i = 0;
        while (frase[i] != '\0'){
            if (frase[i] == 'o'){
                j++;
            }
            i++;
        }
    }
    printf("%d\n", j);
    return 0;
}