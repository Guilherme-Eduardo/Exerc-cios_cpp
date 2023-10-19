#include "biblaureano.h"
int main(){

    int numeros = 1000;

    while(numeros <=1999){
            cout << "O numero " << numeros << " e invalido" << endl;
        numeros++;
            if(numeros % 11 == 5){
                cout << numeros << endl;
                numeros++;
            }
    }


    return 0;
}
