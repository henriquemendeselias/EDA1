#include <stdio.h>

int main(){
    int n, m, i=0, a=0;
    char palavra[100];
    scanf("%d", &n);

    for (m = 0; m < n; m++) {
        scanf("%s", palavra);
        i = 0;
            while (palavra[i] != '\0'){
                i++;
            }
        if (a < i){
            a = i;
        } 
    }
    printf("%d", a);
    return 0; 
}