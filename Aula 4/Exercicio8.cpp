#include "biblaureano.h"
int main() {

float valorUm = readFloat("Digite o primeiro valor: ");
float valorDois = readFloat("Digite o segundo valor: ");
float valorTres = readFloat ("Digite o terceiro valor: ");
float mediaGeometrica = (valorUm * valorDois * valorTres ) / 3.0;


cout << "A Media Geometrica dos valores digitados e de: " << mediaGeometrica << endl;

return 0;



}
