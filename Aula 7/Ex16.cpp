#include "biblaureano.h"
int main(){

    cout <<"\n\tAnalise de Curriculo\n";

    int idade = readInt("Informe a sua idade: ");
    char universitario = readChar("Voce esta cursando alguma graduacao? ");
    char ingles = readChar("Voce possui conhecimento da lingua inglesa? [S / N] ");

    if(idade >= 18){
        if(universitario == 'S'){
            if(ingles == 'S'){
            cout << "Voce se enquadra nos requisitos da vaga, boa sorte!!!" << endl;
            }
        }
    }
        else{
        cout << "Infelizmente voce nao se enquadra a esta vaga." << endl;
        }


return 0;
}
