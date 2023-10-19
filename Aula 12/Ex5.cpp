#include "biblaureano.h"
int main(){


    int contador=1;
    int resultado;

    do{
        if ( contador%2==0){
        resultado = contador*contador;
        cout << contador << " * " << contador << " = " << resultado << endl;
        contador++;
        }
        else{
            contador++;
        }

    } while (contador<=100);

    return 0;
}
