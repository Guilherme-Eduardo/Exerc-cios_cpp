#include "biblaureano.h"
int main() {

    int numero1, numero2;

    cout << "Confira se os valores abaixo sao iguais: " << endl;

    numero1 = readInt("Informe um valor: ");
    numero2 = readInt("Informe o segundo valor:");

    if(numero1 == numero2){
        cout << "Ambos valores sao iguais" << endl;
    }
    else {
        cout << "Sao valores diferentes" << endl;
    }

return 0;
}
