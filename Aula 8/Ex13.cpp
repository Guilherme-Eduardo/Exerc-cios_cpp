#include "biblaureano.h"
int main(){

    int termos = 1;
    double contaA = 0;
    double somatorioPotencia = 0;

    while(termos <=51){

        contaA = pow(3,termos-1);
        somatorioPotencia +=contaA;
       // cout << contaA << endl;

        termos++;
    }

    cout << "O somatorio total das potencias de 3^50 e de: "  << somatorioPotencia << endl;
    cout <<"" << endl;


    termos=1;
    float contaB = 0;
    float somatorioFracao = 0;


    while(termos<=51){

        contaB = termos/pow(termos,2);
        somatorioFracao+=contaB;
        //cout << contaB << endl;

        termos++;
    }
    cout << "A soma das fracoes e de: " << somatorioFracao << endl;

    int termoC=1;
    int contaC=0;
    //float diferenca=0;

    while(termoC <= 50){
            if(termoC %2==0){

            contaC-=termoC;
            }
            else {
                contaC+=termoC;
            }
            ++termoC;

    }
    cout << "A diferenca dos termos e de: " << contaC << endl;


    return 0;
}
