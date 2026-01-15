#include <stdio.h>

int main(){
    int D, A, S, m, c, matriculados, aprovados;
    scanf("%d", &D);
    int reprovacoes[D];

    while (scanf("%d %d %d",&A, &S, &m) != EOF){

        for (int i = 0; i < D; i++){
            reprovacoes[i] = -1; 
        }

        int maior_reprovacao =-1;

        for (int i = 0; i < m; i++){
            scanf("%d %d %d", &c, &matriculados, &aprovados);
            int reprovados_na_materia = matriculados - aprovados;
            reprovacoes[c] = reprovados_na_materia;

            if (reprovados_na_materia > maior_reprovacao){
                maior_reprovacao = reprovados_na_materia;
            }
        }
        
        printf("%d/%d\n", A, S);
        for (int i = 0; i < D; i++) {
            if (reprovacoes[i] == maior_reprovacao) {
                printf("%d ", i);
            }
        }
        printf("\n");
        printf("\n");
    }
    return 0;
}