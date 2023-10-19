#include "biblaureano.h"
int main (){

    int resultado, valorAleatorioUm, valorAleatorioDois;

    valorAleatorioUm = randomico(1,10);
    valorAleatorioDois = randomico (1,100);

    cout << "\n\tBem vindo ao Calculator Tabajara\n";
    cout << " O resultado da soma dos valores de " << valorAleatorioUm << " + " << valorAleatorioDois << " e de: ";
    resultado = readInt();

    if(resultado == valorAleatorioUm + valorAleatorioDois){
        cout << "NICEEEEEEEE. O resultado esta correto!!!!!!!" << endl;
    }
    else{
        cout << "ERROOOOOOOU !!! Tente novamente!!" << endl;
    }


    return 0;
}
