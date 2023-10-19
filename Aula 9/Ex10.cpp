#include "biblaureano.h"
int main(){

    string caractere = readString("INFORME UM CARACTERE: ");
    int linhas = readInt ("INFORME O NUMERO DE LINHAS: ");

    int contador =1;

    while(linhas >= contador){

        int i = linhas;
        while (i >= contador){
            cout << caractere;
            i--;
        }
        cout << endl;

        contador++;

    }

    return 0;
}
