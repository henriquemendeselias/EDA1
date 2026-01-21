#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v = calloc(20, sizeof(int));
    printf("Antes:  %p\n", (void*)v);

    v = realloc(v, 1000 * sizeof(int));
    printf("Depois: %p\n", (void*)v);

    free(v);
    return 0;
}
