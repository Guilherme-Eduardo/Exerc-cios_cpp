#include "biblaureano.h"
int main(){

    int contador=1;
    int potencia3;
    int somatorioPotencia=0;
    float fracao;
    float somatorioFracao=0;
    int somaDiferenca=0;

    do{
        potencia3=pow(3,contador-1);
        somatorioPotencia+=potencia3;

        fracao=contador/pow(contador,2);
        somatorioFracao+=fracao;
        //cout << somatorioFracao << endl;

        if(contador%2==0){
            somaDiferenca-=contador;

        }
        else{
            somaDiferenca+=contador;
        }
        ++contador;

    } while (contador<4);

    cout << somatorioPotencia << endl;
    cout << somatorioFracao << endl;
    cout << somaDiferenca << endl;


    return 0;
}
