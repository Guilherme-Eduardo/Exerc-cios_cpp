#include "biblaureano.h"
int main (){

    float mediaPonderada, quimica, fisica, matematica, pesoQuimica = 1.0, pesoFisica = 2.0, pesoMatematica = 3.0 ;

    cout << "\n\tCALCULADORA MEDIA PONDERADA" << endl;
    cout << "" << endl;

    quimica = readFloat("Insira a sua nota em Quimica: ");
    fisica = readFloat("Insira sua nota em Fisica: ");
    matematica = readFloat("Insira sua nota em matematica: ");

    mediaPonderada = ((quimica * pesoQuimica) + (fisica * pesoFisica) + (matematica * pesoMatematica)) / (pesoQuimica + pesoFisica + pesoMatematica);
    cout << "O valor da media ponderada " << mediaPonderada << endl;

    return 0;




}
