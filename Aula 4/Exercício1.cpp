#include "biblaureano.h"
int main() {

    int valorA = readInt("Digite o primeiro valor: ");
    int valorB = readInt("Digite o segundo valor ");

    int permutacao = valorA;
    valorA = valorB;
    valorB = permutacao;

    cout << "O primeiro valor agora e de " << valorA << " e o segundo valor e de " << valorB << endl;

    return 0;

}




