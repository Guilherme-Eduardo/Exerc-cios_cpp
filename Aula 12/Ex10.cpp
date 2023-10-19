#include "biblaureano.h"
int main(){

    int verifica;
    int contador=1;

    do{
        if(contador%2!=0 && contador %3!=0){
            cout << "O NUMERO " << contador << " E UM NUMERO PRIMO!!" << endl;
            contador++;
        }
        else{
            contador++;
        }
    } while (contador <=100);


 return 0;
}
