#include <stdio.h>

struct tipoData{
    int dia;
    int mes;
    int ano;
};

struct tipoPessoa{
    char nome[80];
    struct tipoData dtNascimento;
};

struct tipoPessoa separaInfo(char nome[80], int dt_nascimento){
    struct tipoPessoa p;
    int i = 0;

    p.dtNascimento.ano = dt_nascimento / 10000;
    p.dtNascimento.mes = (dt_nascimento / 100) % 100;
    p.dtNascimento.dia = (dt_nascimento % 100);

    while (nome[i] != '\0'){
        p.nome[i] = nome[i];
        i++;
    }
    p.nome[i] = '\0';
    
    return p;
}