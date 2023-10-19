#include "biblaureano.h"
int main(){

    int positivos=0;
    int negativos=0;
    int pares=0;
    int impares=0;
    int maiorValor=1;
    int contador=1;

    int random;

    do{
        random = randomico(-50,50);
        cout << random << endl;

        if(random>0){
            positivos++;
        }
        else{
            negativos++;
        }
        if(random%2==0){
            pares++;
        }
        else {
            impares++;
        }
        if (random>maiorValor){
            maiorValor=random;
        }

        contador++;

    } while (contador<=50);

     cout << "O TOTAL DE NUMEROS POSITIVOS INFORMADOS E DE: " << positivos << endl;
     cout << "O TOTAL DE NUMEROS NEGATIVOS INFORMADOS E DE: " << negativos << endl;
     cout << "O TOTAL DE NUMEROS PARES E DE : "<< pares << endl;
     cout << "O TOTAL DE NUMEROS PARES E DE: " << impares << endl;
     cout << "MAIOR VALOR E "<<  maiorValor << endl;

    return 0;
}
