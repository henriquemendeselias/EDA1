#include <stdio.h>

int main () {

    char str[3] = {'O', 'i', '\0'}; 
    int i; 
    for (i = 0; i <= 3; i++) printf("%c", str[i]); 

    char str_1[] = "flamengo";
    printf("%s\n", str_1);

    char str_2[100];

    scanf("%[^\n]", str_2);

    printf("%s", str_2);

    return 0;
}