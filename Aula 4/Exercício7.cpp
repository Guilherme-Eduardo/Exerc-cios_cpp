#include "biblaureano.h"
int main () {

    float valorUm, valorDois, valorTres, media ;

    cout << "\n\tCALCULADORA DE MEDIA ARITMETICA" << endl ;

    valorUm = readFloat("Insira o primeiro valor: ") ;
    valorDois = readFloat("Insira o segundo valor: ") ;
    valorTres = readFloat("Insira o terceiro valor ") ;
    media = (valorUm + valorDois+ valorTres) / 3.0 ;

    cout << "portanto, a media aritmetica sera de: " << media << endl;

    return 0;
}
