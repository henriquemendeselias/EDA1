//algoritmo de ordenação sao algoritmos para ordenar vetores
// insertion sort, selection sort

//insertion sort: vetor = 2,13,1,5, compara as 2 primeiras e ver qual é maior, apos isso pega a terceira e compara com a 2da e 1ra... assim sucessivamente

//inviavel pra vetores grandes pois tem n² de complexidade

#include <stdio.h>

void insertionsort(int v[], int n){
    for(int j = 1; j < n; ++j){
        int x = v[j];
        int i;

        for (i = j-1; i >= 0 && v[i] > x; --i){
            v[i+1] = v[i]; 
        }

        v[i+1] = x;
    }
}

int main(){

    return 0;
}