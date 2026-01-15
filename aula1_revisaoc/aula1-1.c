#include <stdio.h>

int main(){

    int idade = 20;
    printf("A idade eh: %d\n" ,idade);

    float preco = 5.99;
    double preco2 = 3.92;
    printf("o preco eh: %.2f %lf\n", preco, preco2);

    char a = 'A';
    printf("A letra eh: %c\n" ,a);

    int num;
    num = getchar();
    printf("%c\n", num); 
    

    int num2;
    scanf("%d", &num2);
    printf("%d\n", num2);
    
    return 0;
}

