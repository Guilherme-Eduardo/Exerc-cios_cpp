#include "biblaureano.h"
int main(){

int idade;

cout << "Para avancar a etapa, informe a sua idade" << endl;
idade = readInt("Informe o valor da sua idade: ");

    if(idade >= 16){
        cout << "Perfeito. Acesso liberado ao jogador." << endl;
    }
    else{
        cout << "Acesso bloquado. Voce nao possui a idade para avancar" << endl;
    }
        return 0;



}
