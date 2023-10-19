#include "biblaureano.h"
int main(){

    float inteiros = readInt("INFORME UM NUMERO INTEIRO: ");
    float naturais = readInt("INFORME UM NUMERO NATURAL: ");
    float resultado=1;

    do{
        if (inteiros > naturais){
            cout << "ERROR 404: NOT FOUND ...";
        }
            else if(inteiros<=naturais){
                resultado*= inteiros;
                cout << resultado << endl;
                inteiros++;
            }
            if(inteiros==0){
                inteiros++;
            }
    } while(inteiros <=naturais);
    //cout << resultado << endl;

    return 0;
}
