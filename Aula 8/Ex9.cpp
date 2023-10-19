#include "biblaureano.h"
int main(){

    int contador =0;
    int valores;


    while(contador <=10){
        valores = randomico(1,50);
        //cout << valores << endl;

            if(valores >=10 && valores <=20){
            cout << "Os numeros que estao no intervo de 10,20 sao: " << valores << endl;
            }
                else {
                cout << "Os numeros que estao fora do intervalo de 10,20 sao: " << valores << endl;
                }
      contador++;
    }



 return 0;
}
