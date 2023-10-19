#include "biblaureano.h"
int main(){

    int qtd=1;
    int valores;
    int positivo =0;
    int par = 0;
    int impar=0;
    int negativo=0;


    while(qtd <= 30){
        valores = randomico(-50,50);
        cout << valores << endl;
        qtd++;

            if(valores >0 && valores%2==0){
                //cout << "Positivos e Par : " << valores << endl;
                par++;
                positivo++;
            }
                else if(valores >0 &&valores%2==1){
                            //cout << "Positivo e Impar: " << valores << endl;
                            positivo++;
                            impar++;
                }
                    else if(valores <0){
                        //cout << "Negativos : " << valores << endl;
                        negativo++;
                    }
    }

                    cout << "Total de numeros Positivos: " << positivo << endl;
                    cout << "Total de numeros Pares: " << par << endl;
                    cout << "Total de numeros impares: " << impar << endl;
                    cout << "Total de numeros negativos: " <<  negativo << endl;


    return 0;
}
