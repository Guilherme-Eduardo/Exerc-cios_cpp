#include "biblaureano.h"

int conferePrimo(int numero);
int main(){
    setlocale(LC_ALL,"PORTUGUESE");

    int numero = readInt("INFORME UM VALOR PARA DESCOBRIR QUANTOS NUMEROS PRIMOS EXISTEM ATÉ ESSE INTERVALO: ");
        cout << conferePrimo(numero) << endl;

return 0;
}

int conferePrimo (int numero){
    bool primo = true;
    int contador = 0;

    for (int i = 2 ; i < numero; i++){
        if(numero % i != 0){
            ++contador;
        }
    }
    return contador;
}
