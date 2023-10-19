#include "biblaureano.h"
int main(){

    int multa;
    int velocidadeMaximaVia = readInt("Informe a velocidade maxima da via: ");
    int velocidadeMotorista = readInt("Informe a velocidade que o motorista passou nesta via: ");

    if(velocidadeMaximaVia > velocidadeMotorista || velocidadeMaximaVia == velocidadeMotorista){
        cout << "Motorista dentro dos limites de velocidade" << endl;
    }
        else{
            if((velocidadeMaximaVia - velocidadeMotorista) >=-10){
            multa = 50;
            cout << "O motorista ultrapassou os limites de velocidade. Multa leve de " << multa << " reais" << endl;
            }

            else{
                if((velocidadeMaximaVia - velocidadeMotorista) >=-11 ||velocidadeMaximaVia - velocidadeMotorista >=-30 ){
                multa = 100;
                cout << "O motorista ultrapassou os limites de velocidade. Multa media de " << multa << " reais" << endl;
                }

                else{
                    if((velocidadeMaximaVia - velocidadeMotorista) >=-31){
                    multa = 200;
                    cout << "O motorista ultrapassou os limites de velocidade. Multa grave de " << multa << " reais" << endl;
                    }
                }
            }

        }

return 0;

}
