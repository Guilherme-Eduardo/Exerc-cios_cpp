#include "biblaureano.h"
int main(){

    int contagem = readInt("INFORME UM VALOR PARA A CONTAGEM REGRESSIVA: ");

    while(contagem>0){
        gotoXY(30,15);
        cout << contagem << " segundos para o envio do foguete!!!" << endl;
        espera(1000);
        --contagem;
        if(contagem==0){
            limparTela();
        }
    }
    gotoXY(30,15);
    cout << "FOGO!!!!!!!" << endl;

    return 0;
}
