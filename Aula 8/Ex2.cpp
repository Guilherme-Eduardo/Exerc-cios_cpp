#include "biblaureano.h"
int main(){

    int n = 0;
    int soma = 1;

    while(n <=99){
        cout << "Primeiro numero " << n << " segundo numero " << soma<< endl;
        soma = n + soma;
        cout << soma << endl;
        n++;
        soma++;

    }


    return 0;
}
