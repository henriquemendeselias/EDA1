#include <stdio.h>

void swapmax3(int *a, int *b, int *c){
    if (*a >= *b && *b >= *c){
        return;
    }

    if (*b > *a){ 
        int aux = *b; 
        *b = *a; 
        *a = aux;
        swapmax3(a, b, c);
    }

    if (*c > *a){ 
        int aux = *c; 
        *c = *a; 
        *a = aux;
        swapmax3(a, b, c);
    }

    if (*c > *b){ 
        int aux = *c; 
        *c = *b; 
        *b = aux;
        swapmax3(a, b, c);
    }
}

/*int main(){
    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
    printf("\nx=%d, y=%d, z=%d\n", x, y, z);
    swapmax3(&x, &y, &z);
    printf("Depois da funcao: x=%d, y=%d, z=%d\n", x, y, z);
    return 0;
}*/
