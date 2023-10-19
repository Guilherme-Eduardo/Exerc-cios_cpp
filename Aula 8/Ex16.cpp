#include "biblaureano.h"
int main (){

    int n = readInt("INFORME O VALOR DE N: ");
    int i=1;
    float fatorial=1;
    float e = 0;

    int contador=1;
    while (contador<=n){

        int n = contador;
        while(n>0){

            fatorial *=n;
            n--;
            //cout << fatorial << endl;

        }
         e +=(i/fatorial);
         contador++;
    }

    cout << e << endl;

    return 0;
}
