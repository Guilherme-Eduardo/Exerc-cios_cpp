#include "biblaureano.h"

bool confere(int n);
int main(){
    setlocale(LC_ALL,"PORTUGUES");

    int n = readInt("INFORME UM N�MERO PARA AN�LISE: ");

    bool confere (int n);

        if (confere(n)){
            cout << "NUMERO PRIMO" << endl;
        }
        else{
            cout << "N�O � UM N�MERO PRIMO" <<endl;
        }

return 0;
}

bool confere(int n){
    bool primo = true;

    for (int i = 2 ; i < n; i++){
        if(n % i == 0){
            primo = false;
            return false;
        }
    }
 return true;


}

