#include "biblaureano.h"

int main(){

    int idade = readInt("Informe a sua idade: ");

    if( idade >= 18){
        cout << "Maravilha!! Voce ja e maior de idade." << endl;
    }
    else if(idade < 18){
        cout << "Puts!! Ainda falta " << 18 - idade << "para voce se tornar maior de idade." << endl;
    }


return 0;
}
