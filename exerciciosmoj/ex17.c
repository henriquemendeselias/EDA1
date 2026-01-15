#include <stdio.h>



int validaPeso(double pesoKg){
    if ( pesoKg < 0){
        return 0;
    }
    else {
        return 1;
    }
};

void fazGrama(double pesoKg){
    int peso_valido = validaPeso(pesoKg);
    
    if (peso_valido == 1){
        printf("%.4f\n", pesoKg * 1000);
    }
};

void fazTonelada (double pesoKg){
    int peso_valido2 = validaPeso(pesoKg);
    
    if (peso_valido2 == 1){
        printf("%.4f\n", pesoKg / 1000);
    }
};

//int main(){
    //double peso = 5;

    //fazGrama(peso);
    //fazTonelada(peso);
    //return 0;
//}