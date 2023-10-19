#include "biblaureano.h"
int main(){

    int n = readInt("Informe o valor: ");
    int valores = 1;


    while(valores <= 10){
        int calculo = n * valores;
        cout << "Tabuada " << calculo << endl;
        valores++;
    }




    return 0;
}
