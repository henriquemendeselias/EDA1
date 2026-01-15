#include <stdio.h>

struct pessoa {

    char nome[100];
    int idade;
    double altura;

}; 

int main(){

    struct pessoa alunos[80];

    scanf("%s", alunos[0].nome); 
    scanf("%d", &alunos[0].idade);
    scanf("%lf", &alunos[0].altura);

    return 0;
}