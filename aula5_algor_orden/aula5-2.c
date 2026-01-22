//selection sort: encontra o menor vetor e coloca na 1ra posição, e repete o processo pra tudo.

#include <stdio.h>

void selectionsort(int v[], int n){
    for (int i = 0; i < n-1; i++){
        int min = i;
        for (int j = i+1; j < n; j++){
            if (v[j] < v[min]){
                min = j;
            } 
        }
        int aux = v[i];
        v[i] = v[min];
        v[min] = aux;
    }
}