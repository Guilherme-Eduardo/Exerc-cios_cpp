#include "biblaureano.h"
int main(){


    int realDolar, realEuro, tipoMoeda;

    int valorReal = readInt("Informe um valor em Real: ");

    enum TIPOMOEDA {DOLAR =1, EURO=2};
    tipoMoeda = readInt("Para qual moeda voce deseja converter o seu valor em real [Dolar = 1, Euro = 2]: ");


    if(tipoMoeda == DOLAR){
        realDolar = valorReal / 5.00;
        cout << "O seu valor em Dolar sera de " << realDolar << " dolar" << endl;
    }
    else if(tipoMoeda == EURO){
        realEuro = valorReal / 7.00;
        cout << "O seu valor em Euro sera de " << realEuro << " euro" << endl;
    }

return 0;
}
