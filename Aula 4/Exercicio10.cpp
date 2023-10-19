#include "biblaureano.h"
int main() {
float valorUm, valorDois, soma, substracao, divisao, produto ;

cout << "CALCULADORA BASICA" << endl;
valorUm = readFloat ("Insira o primeiro valor: ");
valorDois = readFloat("Insira o segundo valor: ");

soma = valorUm + valorDois;
substracao = valorUm - valorDois;
produto = valorUm * valorDois;
divisao = valorUm / valorDois;


cout << "A soma de " << valorUm << " e " << valorDois << " vale: " << soma <<  endl;
cout << "A subtracao de " << valorUm << " e " << valorDois << " vale: " << substracao << endl;
cout << "O produto de " << valorUm << " e " <<valorDois << " vale: " << produto << endl;
cout << "A divisao de " << valorUm << " e " << valorDois << " vale: " << divisao << endl;

return 0;

}
