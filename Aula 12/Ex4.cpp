#include "biblaureano.h"
int main(){

    int soma=0;
    int contador=0;

    do{
        if(contador%2!=0){
            soma+=contador;
            contador++;
        }
        else{
            contador++;
        }
    } while (contador <=100);

    cout << soma << endl;

    return 0;
}
