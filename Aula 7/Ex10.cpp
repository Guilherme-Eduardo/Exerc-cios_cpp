#include "biblaureano.h"
int main () {

    float calculo;
    int valor1 = readInt("Informar um valor: ");
    int valor2 = readInt("Informar o segundo valor: ");

    if(valor1 > valor2){
        calculo = (valor2*1.0) / valor1;
        cout << "O resultado da divisao do maior pelo menor e: " << calculo << endl;
    }
    else if(valor1 < valor2){
        calculo = (valor1*1.0) / valor2;
        cout << "o resultado da divisao do maior pelo menor e: " << calculo << endl;
    }


return 0;
}
