#include "biblaureano.h"
int main (){

    string masculino, feminino;

    float bonus, total;

    cout << "Pontuacao conforme o genero: " << endl;

    string sexoJogador = readString("Informe o seu Sexo (Masculino/Feminino): ");

    float pontuacao = readFloat("Insira o valor da pontuacao: ");
    //float total = pontuacao + bonus;

    if(sexoJogador == "Masculino"){
        bonus = pontuacao*0.05;
        total = pontuacao + bonus;
        cout << "Ola Ze. Sua pontuacao e de:" << pontuacao << ". Voce recebeu um bonus de " << bonus << ". Portanto, o total e de: " << total << endl;
    }

    if(sexoJogador == "Feminino"){
        bonus = pontuacao*0.07;
        total = pontuacao + bonus;
        cout <<"Ola Maria. Sua pontuacao e de: " << pontuacao << ". Mais o Bonus vale em " << bonus << ". Portanto, o total e de: " << total << endl;
    }

 return 0;
}
