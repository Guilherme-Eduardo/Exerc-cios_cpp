#include "biblaureano.h"
int main(){

    int n = 0;
    int soma = 2;

    while(n <=99){
        cout << "Primeiro numero " << n << " segundo numero " << soma<< endl;
        soma = n + soma;
        cout << soma << endl;
        n= n+2;
        soma = soma+2;

    }


    return 0;
}
