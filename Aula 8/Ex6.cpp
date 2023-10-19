#include "biblaureano.h"
int main(){

    int contador = 1;
    int calculo;

    while(contador <= 200){
        contador++;
            if(contador % 5 ==0){
                cout << contador << endl;
                contador++;
            }
    }

    return 0;
}
