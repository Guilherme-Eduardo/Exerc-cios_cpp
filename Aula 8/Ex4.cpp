#include "biblaureano.h"
int main(){

    int n = 1;
    int soma = 3;

    while(n <=100){
        cout << "Primeiro numero " << n << " segundo numero " << soma << endl;
        soma = n + soma;
        cout << soma << endl;
        n = n + 2;
        soma = soma + 1;

    }


    return 0;
}

