#include <stdio.h>

int main() {
    int i;
    scanf("%d", &i);

    if (i % 2 == 0)
        printf("Numero eh par\n");
    else
        printf("Numero eh impar\n");

    int s; 
    scanf("%d", &s);
    switch (s % 3) 
    {
        case 0:
            printf("divisivel por 3\n");
            break;

        case 1:
            printf("resto 1\n");
            break;

        case 2:
            printf("resto 2\n");
            break;
    }
    return 0;
}