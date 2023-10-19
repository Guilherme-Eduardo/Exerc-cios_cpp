#include "biblaureano.h"
int main(){

    int n = readInt("INFORME UM VALOR PARA VARIAVEL N [3<= N >=13]: ");
    if(n <=3 || n <=13 || n%2==0 ){

        int linha = 1;
        while(linha<=n){
             int coluna=1;
                while(coluna<=n){
                    if( linha==coluna ){
                    cout << ":";
                    }
                        else {
                            cout << "+";

                        }
                    ++coluna;
                    }
                        cout << endl;
                        ++linha;
        }
    }

    return 0;
}
