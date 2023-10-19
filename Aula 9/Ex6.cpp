#include "biblaureano.h"
int main(){

    float h = 0;
    float n = readInt("VALOR TERMO N: ");

    int contador=1;

    while(contador<=n){
            h+=(float)10/contador;

            contador++;


    }
    cout << "RESULTADO: " << h << endl;



    return 0;
}
