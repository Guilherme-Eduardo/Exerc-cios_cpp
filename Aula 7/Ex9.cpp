#include "biblaureano.h"
int main (){

    int valor = readInt("Digite um valor para a verificarmos se ele e PAR ou IMPAR: ");
    int par = valor % 2 == 0;
    //int impar = (valor % 2) > 0;

    if(par){
        cout << " O valor informado e PAR!!!" << endl;
    }
    else{
    cout << "o valor e IMPAR!!!" << endl;
    }



return 0;
}
