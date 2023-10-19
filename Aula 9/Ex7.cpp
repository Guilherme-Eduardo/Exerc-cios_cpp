#include "biblaureano.h"
int main(){

    int atletiba =0;
    int vitoriasCoritiba =0;
    int vitoriasAthletico=0;
    int empates=0;
    int golCoritiba;
    int golAthletico;
    int novoClassico = 1;

    while(novoClassico==1){

    atletiba++;
    golCoritiba = readInt("Informe o valor de gols do Coxa no atleTIBA:");
    golAthletico = readInt( "Informe o valor de gols do CAP no atleTIBA:");

     if(golCoritiba>golAthletico){
        cout << "O COXA GANHOU !!!" << endl;
        vitoriasCoritiba++;

     }
     else if(golAthletico > golCoritiba){
            cout << "PORCADA GANHOU !!!" << endl;
            vitoriasAthletico++;

     }
     else {
        cout << "EMPATE" << endl;
        empates++;
     }

     novoClassico = readInt("Deseja jogar outro Classico? [1.SIM / 2.NAO]");
    }


    cout << "QUANTOS ATLETIBAS FIZERAM PARTE DA ESTATISTICAS: " << atletiba << endl;
    cout << "NUMERO DE VITORIAS DO CORITIBA: " << vitoriasCoritiba << endl;
    cout << "NUMERO DE VITORIAS DO CAPequeno: " << vitoriasAthletico << endl;
    cout << "NUMERO DE EMPATES: " << empates << endl;

    if (vitoriasCoritiba>vitoriasAthletico){
        cout << "CORITIBA O MAIS VITORIOSO NO CLASSICO" << endl;
    }

    else if(vitoriasAthletico>vitoriasCoritiba){
        cout << "CAP O MAIS VITORIOSO NO CLASSICO" << endl;
    }
    else{
        cout << "NINGUEM E VITORIOSO" << endl;
    }








    return 0;
}
