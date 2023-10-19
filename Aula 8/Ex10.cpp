#include "biblaureano.h"
int main(){


    cout << "Analise de um numero primo: \n";
    cout << "" << endl;

    int valor = readInt("Informe um valor: ");

    if (valor == 2 || valor ==3){
        cout << "E um numero primo" << endl;
        return 0;
    }
        if(valor % 2 == 1 && valor % 3 !=0){
        cout << "E um numero primo: " << valor << endl;
        }
            else {
                cout << "O numero " << valor << " nao e um numero primo" << endl;
            }


return 0;
}
