#include "biblaureano.h"
int main (){

    char sexo = readChar("Informe o seu sexo [M ou F]: ");
    float altura = readFloat("Informe a sua altura: ");

    float pesoIdealM = (72.7 * altura) - 58.0;
    float pesoIdealF = (62.1*altura) - 44.7;

    if (sexo == 'M'){
        cout << "O peso ideal para este homem e de " << pesoIdealM << endl;
    }
    else{
        if(sexo == 'F'){
            cout << "O peso ideal para esta mulher e de " << pesoIdealF << endl;
        }
    }
return 0;
}
