 // trabalhando com s t r i n g s
 // programa_002 . cpp
#include "biblaureano.h"

int main (){

    int contador=1;

    int numero=1;


    while(contador<=20){
        bool primo=true;
        int i=2;
        while(i<numero){

            if(numero%i==0){
                primo=false;

            }
            i++;
        }
            if(primo){
                cout << "O NUMERO " << numero << " E UM NUMERO PRIMO." << endl;
                ++contador;
            }
            ++numero;
    }
    return 0;
 }
