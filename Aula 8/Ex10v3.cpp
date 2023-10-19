#include "biblaureano.h"

int main(){

    int numero = readInt("INFORME UM NUMERO: ");
    bool primo=true;

    int i=2;
    while(i<numero){
            if(numero%i==0){
                primo=false;
            }
        ++i;
    }
            if(primo){
                cout << numero << " E UM NUMERO PRIMO" << endl;
            }
            else{
                cout << numero << " NAO E UM NUMERO PRIMO" << endl;

            }
    return 0;
    }



