#include "biblaureano.h"
int main(){

    int contador=1000;

    do{
        if ( contador%11==5 ){
            cout << "OS DIVISORES DE 11 QUE DAO RESTO 5 SAO: " << contador << endl;
            contador++;
        }
        else{
            contador++;
        }
    } while (contador <=2000);

    return 0;
}
