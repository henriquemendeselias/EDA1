#include <stdio.h>

int main(){
    char nome[100];
    scanf(" %[^\n]", nome);
    
    int a = 0, b = 0, i;
    char primeiro_nome[100];

    while(nome[a] != ' ' && nome[a]!= '\0') {
        primeiro_nome[b] = nome[a];
        a++;
        b++;
    }
    primeiro_nome[b] = '\0';

    for (i = 0; i < b; i++){
        if (primeiro_nome[i] >= 'A' && primeiro_nome[i] <= 'Z') {
            primeiro_nome[i] += 32;
        }
    }   

    int c = 0, d = 0; 
    char ultimo_nome[100];

    while (nome[c] != '\0') {
        c++;
    }
    c--;
    while( c>= 0 && nome[c] != ' '){
        c--;
    }

    c++;
    while (nome[c] != '\0') {
        ultimo_nome[d] = nome[c];
        c++;
        d++;
    }
    ultimo_nome[d] = '\0';

    for (int l = 0; l < d; l++){
        if (ultimo_nome[l] >= 'A' && ultimo_nome[l] <= 'Z') {
            ultimo_nome[l] += 32;
        }
    } 

    printf("%s.", primeiro_nome);
    printf("%s", ultimo_nome);
    printf("@unb.br");
    return 0;
}

