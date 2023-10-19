#include "biblaureano.h"
int main (){

    cout << "JOGO DO NUMERO PERFEITO" << endl;
    cout << "" << endl;

    int contador =1;
    int numeroPerfeito =0;
    int soma=0;
    int divisor = 1;

    while(numeroPerfeito<5){

        if(contador % divisor==0){
            soma+=divisor;
             //cout << soma << endl;
                divisor++;
        }

        else{
            contador++;
        }
      if (contador == soma){
          cout << "O numero " << contador << " e um numero perfeito" << endl;
      }
    }

    cout << soma << endl;


    return 0;
}
