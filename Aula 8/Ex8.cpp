#include "biblaureano.h"
int main(){

    int numero1 = readInt("Informe o primeiro valor: ");
    int numero2 = readInt("Informe o segundo valor: ");

    int calculo;
    int multi = 1;

    while (numero1 <= numero2){
            calculo = numero1 * (numero1++);
            numero1++;
            multi *= calculo;
    }
    cout << multi << endl;




    return 0;
}
