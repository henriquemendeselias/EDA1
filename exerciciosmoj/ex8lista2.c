#include <stdio.h>

long int memo[81];

long int fibonacci(int n){
    if (memo[n] != 0){
        return memo[n];
    }


    if (n == 1 || n == 2){
        return 1;
    }

    memo[n] = fibonacci(n-1) + fibonacci(n-2);

    return memo[n];
}

//int main(){
    //int n;
    //scanf("%d", &n);
    //printf("%ld\n", fibonacci(n));
//}