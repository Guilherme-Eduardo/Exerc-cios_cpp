#include "biblaureano.h"
int main (){

    int resultado, valorAleatorioUm, valorAleatorioDois, operacao,total, sinal;
    string tipo;

    valorAleatorioUm = randomico(1,100);
    valorAleatorioDois = randomico (1,100);

    operacao = randomico(1,4);

    if(operacao == 1){
    tipo = "soma";
    resultado = valorAleatorioUm + valorAleatorioDois;
    }
    else if(operacao == 2) {
            tipo = "substracao";
            resultado = valorAleatorioUm - valorAleatorioDois;
        }

    else if(operacao == 3){
        tipo = "Multiplicacao";
        resultado = valorAleatorioUm * valorAleatorioDois;
        }

    else if(operacao ==4){
        tipo = "Divisao";
        resultado = valorAleatorioUm / valorAleatorioDois;
        }

    // As funções acima são para sortear o tipo da operação, juntamente com resultado


    cout << "\n\tBem vindo ao Calculator Tabajara\n";

    cout << "O resultado da " << tipo << " dos valores de " << valorAleatorioUm << " e " << valorAleatorioDois << " e de: ";
    total = readInt();

    if(total == resultado){

    cout << "NICEEEEEEEE. O resultado esta correto!!!!!!!" << endl;
    }


    else{
        cout << "ERROOOOOOOU !!! Tente novamente!!" << endl;
        cout << "O resultado correto era " << resultado << endl;
    }


    return 0;
}
