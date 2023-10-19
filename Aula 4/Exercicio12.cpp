#include "biblaureano.h"
int main (){

    int grausF = readInt("Insira o valor em Fahrenheit: ");
    int grausC = (grausF - 32) * 5 / 9 ;

    cout << "A conversao de " <<grausF << " Fahrenheit para Celsius e de:" << grausC << " °C" << endl;

    return 0;

}
