#include "biblaureano.h"
int main (){

    int governo, valorDolar, salarioReal, custoCasa, salarioDolar, casasConstruidas, sobra;

    governo = 10000000;
    valorDolar = readFloat("Entre com o valor do Dolar: ");
    salarioReal = readFloat ("Entre com o valor do Salario Minimo: ");

    salarioDolar = salarioReal * valorDolar;

    custoCasa = salarioDolar * 150 ;

    casasConstruidas = governo / custoCasa;

    sobra = governo - (custoCasa *casasConstruidas);

    cout << "Números de casas construidas foi de: " << casasConstruidas << endl;
    cout << "Cada casa custa o valor de: " << custoCasa << endl;
    cout << "O valor de sobra foi de: " << sobra << endl;

    return 0;





}
