#include "biblaureano.h"
int main () {

    int resto;
    int numero = readInt("Digite um numero que seja multiplo de 5: ");
    resto = numero % 5;

    if(numero / 5 && resto == 0 ){
        cout << "O numero " << numero << " e multiplo de 5" << endl;
    }
    else{
        cout << "O numero " << numero << " nao e multiplo de 5 :/" << endl;
    }

return 0;
}
