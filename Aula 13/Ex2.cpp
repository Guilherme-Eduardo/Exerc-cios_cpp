#include "biblaureano.h"
int main(){

    int inteiro = readInt("INFORME UM VALOR INTEIRO: ");
    int natural = readInt("INFORME UM VALOR NATURAL: ");
    int resultado=1;

    for(inteiro;inteiro<=natural;inteiro++){

        if(inteiro>natural){
            cout << "VALORES INVALIDOS" << endl;
            break;
        }

        resultado*=inteiro;
    }
    cout << resultado << endl;



    return 0;
}
