#include "biblaureano.h"
int main(){

    double fatorial=1;
    char novamente ='s';

    do{
        int numero = readInt("INFORME UM VALOR PARA SABER O SEU FATORIAL: ");
         while(numero>=1){
            fatorial*=numero;
            --numero;

                if( numero==1){
                    cout << fatorial << endl;
                    novamente = readChar("DESEJA JOGAR NOVAMENTE [s/n]: ");
                    fatorial=1;

                }
                else if(novamente!='s'){
                        cout << "GAME OVER!!!" << endl;

                }
        }

    } while (novamente =='s');



    return 0;
}
