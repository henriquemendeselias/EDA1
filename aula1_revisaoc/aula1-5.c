#include <stdio.h>


struct time {
        char nome[100];
        int ano_de_fundacao; 
        float torcedores_em_milhoes;
    };

int main() {
    struct time flamengo; //cria uma variavel flamengo do tipo struct time
    // pra acessar usa se o operador ponto:
    flamengo.ano_de_fundacao = 1895;

    scanf("%s", flamengo.nome);
    printf("%s\n", flamengo.nome);

    struct time milan = {"Milan", 1910, 24.5};
    printf("%d", milan.ano_de_fundacao);
    return 0;
}