#include "biblaureano.h"
int main(){

    int soma=0;
    int contador=2;

    do{
        soma+=contador;
        contador=contador+2; //contando apenas numeros pares

    } while(contador <=100);

    cout << soma << endl;

    return 0;
}
