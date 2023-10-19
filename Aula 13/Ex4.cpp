#include "biblaureano.h"

int main(){
    int valor = 2147483647;
    int resultado=2147483647;

    for (valor; valor<=100;valor/2){
        resultado /=2;
        cout << resultado << endl;
    }


    return 0;
}
