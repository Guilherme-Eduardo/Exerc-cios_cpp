#include "biblaureano.h"
int main (){

    int valor, nota100, nota50, nota20, nota10 , nota5, resto;

    valor = readInt("Entre com um valor: ");
    nota100 = valor / 100;
    resto = valor % 100;

    nota50 = resto / 50;
    resto = valor % 50 ;

    nota20 = resto / 20;
    resto = resto % 20;

    nota10 = resto / 10;
    resto = resto % 10;

    nota5 = resto / 5;
    resto = resto % 5;

    cout << "voce tera as seguintes notas: " << endl;
    cout << "" << endl;
    cout << "Notas 100: " << nota100 << endl;
    cout << "Notas 50: " << nota50 << endl;
    cout << "Notas 20: " << nota20 << endl;
    cout << "Notas 10: " << nota10 << endl;
    cout << "Notas 5: " << nota5 << endl;


    return 0;

}
