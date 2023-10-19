#include "biblaureano.h"
int main(){

    int potencia;
    int somatorioPotencia=0;

    float fracao;
    float somatorioFracao=0;

    int somaDiferenca=0;

    for(int contador=1; contador<=10;contador++){

        potencia = pow(3,contador-1);
        somatorioPotencia += potencia;


        fracao = contador/(pow(contador,2));
        somatorioFracao +=fracao;

        if(contador%2==0){
            somaDiferenca-=contador;

        }
        else{
            somaDiferenca+=contador;
        }

    }

    cout << "POTENCIA 3: " << somatorioPotencia << endl;
    cout << "FRACAO: " << somatorioFracao << endl;
    cout << "DIFERENCA: " << somaDiferenca << endl;




    return 0;
}
