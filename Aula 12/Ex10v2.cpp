#include "biblaureano.h"
int main(){
int divisor=2;
int numero=1;



    int contador=1;

            while(numero<=50){

                    while(divisor==numero){
                        int resultado = numero%divisor;
                        //++divisor;
                            if(resultado==0 && numero%2!=0){
                                cout << numero << " numero primo" << endl;
                                ++numero;
                                divisor=1;

                            }
                                else{//++numero;
                                    divisor++;
                                }
                            }
                    numero++;

                }

    return 0;
}
