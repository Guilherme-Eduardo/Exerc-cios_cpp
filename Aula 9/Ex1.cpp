#include "biblaureano.h"
int main(){

    cout << "Divisoes:\n";
    int valor1;
    int valor2;
    char novamente = 's';


    while(novamente == 's'){
        valor1 = readInt("Informe o primeiro valor para a divisao: ");
        valor2 = readInt("Informe o segundo valor para a divisso: ");

    if(valor2==0){

        cout << "VALOR INVALIDO" << endl;
        valor2 = readInt("Informe o segundo valor para a divisão: ");

    }
    float resultado = (float)valor1/ valor2;

    cout << "O resultado da divisão e de: " << resultado << endl;
    cout << "" << endl;
    novamente = readChar("Deseja realizar outro calculo? [s / n]");

    if(novamente != 's'){
        cout << "GAME OVER" << endl;
        break;
    }

}


    return 0;
}
