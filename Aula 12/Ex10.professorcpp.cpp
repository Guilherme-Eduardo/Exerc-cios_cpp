#include "biblaureano.h"
int main(){

    int numero=1;
    int contador=1;

    do{
        bool primo = true;
        for(int i=2;i<numero;++i){
                //cout << "i: " << i << " numero: " << numero<< endl;

            if( numero % i == 0){
                primo = false;
            }

        }
        if( primo ){
            cout << numero << endl;
            ++contador;
        }
        ++numero;
    } while (contador <=50);


 return 0;
}
