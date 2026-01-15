#include <stdio.h>

int main(){
    int F, L, l;
    scanf("%d %d", &F, &L);

    int cinema[F][L];

    for (int i = 0; i < F; i++){
        for (int j = 0; j < L; j++){
            cinema[i][j] = 0;
        }
    }

    char f;

    while(scanf(" %c%d", &f, &l) != EOF){
        cinema [f -'A'][l - 1] = 1;
    }

    printf("  ");

    for (int i = 1; i <= L; i++){
        printf("%02d ", i);
    }
    
    printf("\n");

    for (int i = F-1; i >= 0; i--){
        printf("%c ", 'A' + i);

        for (int j = 0; j < L; j++){
            if (cinema[i][j] == 0){
                printf("-- ");
            }
            else{
                printf("XX ");
            }
        }
        printf("\n");
    }
    return 0;
}