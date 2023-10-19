#include "biblaureano.h"

float fatorial (float i);
float fatorial2 (float k);

int main(){

    int n = readInt("INFORME UM VALOR PARA A FUNÇÃO N: ");
    float resultado = 0;

    for (int i = 1; i <= n; i++){

        resultado += fatorial(i) / fatorial2(n+i) ;

        cout << "RESULTADO DA FUNÇÃO É DE :" << resultado << endl;
    }

    return 0;
}

float fatorial (float r){
    int multi = 1;

    for(int j = 1; j <= r; j++ ){
        multi *= j;
    }
        return multi;

}

float fatorial2(float k){
    int multi2 = 1;

    for (int i = 1 ; i <= k; i++){
            multi2 *= i;
    }
        return multi2;
}
