#include "biblaureano.h"
int main(){

      int contador=0;

    do{
        if( contador %5==0){
            cout << contador << endl;
            contador++;
        }

            else{
                contador++;
            }
        }while (contador<=200);


    return 0;
}

