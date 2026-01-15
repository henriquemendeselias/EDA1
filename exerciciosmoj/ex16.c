#include <stdio.h>

int faz_conta_direito(int parcelas, char op){
    int total_soma = 0;
    int total_sub;

    if (op == '+'){
        for (int i = 0; i < parcelas; i++){
            int num = 0;
            scanf("%d", &num);
            total_soma = total_soma + num;
        }
        return total_soma;
    }
    else {
        scanf("%d", &total_sub);
        for (int i = 1; i < parcelas; i++){
            int num2 = 0;
            scanf("%d", &num2);
            total_sub = total_sub - num2;
        }
        return total_sub;
    }
};

//int main(){
    //faz_conta_direito(4, '+');
    //faz_conta_direito(5, '-');
    //return 0;
//}