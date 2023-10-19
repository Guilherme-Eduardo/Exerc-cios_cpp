#include "biblaureano.h"
int main(){

    float valor = readFloat("Informe qualquer valor do conjunto dos INTEIROS: ");

    if(valor > 0){
        cout << "O numero " << valor << " eh positivo." << endl;
    }
    else {
        cout << "O numero " << valor << " eh negatvio." << endl;
    }


return 0;
}
