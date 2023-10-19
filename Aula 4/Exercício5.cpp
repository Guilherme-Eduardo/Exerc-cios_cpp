#include "biblaureano.h"
int main() {

    int numeroUm, numeroDois, numeroTres, numeroQuatro, numeroCinco, resultado ;


    numeroUm = readInt("Para realizar uma soma insira o primeiro valor: ");
    numeroDois = readInt("Insira o segundo valor: ") ;
    numeroTres = readInt("Insira o terceiro valor: ") ;
    numeroQuatro = readInt ("Insira o quarto numero: ") ;
    numeroCinco = readInt ("Insira o ultimo valor para realizar uma soma: ") ;
    resultado = numeroUm + numeroDois + numeroTres + numeroQuatro + numeroCinco;


    cout << "Portanto, o valor da soma e de: " << resultado << endl ;

    return 0;


}
