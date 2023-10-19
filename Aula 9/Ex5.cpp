#include "biblaureano.h"
int main(){

    int face1= 0;
    int face2= 0;
    int face3= 0;
    int face4= 0;
    int face5= 0;
    int face6= 0;

    int contador=0;
    int lancamentoDado = readInt("INFORME A QUANTIDADE DE VEZES QUE O DADO FOI JOGADO: ");


    while (contador<lancamentoDado){
            //lancamentoDado;

            int lado = randomico(1,7);

                if(lado ==1){
                    face1++;
                }
                 else if(lado ==2){
                    face2++;
                }

                 else if(lado ==3){
                    face3++;
                }

                 else if(lado ==4){
                    face4++;
                }

                 else if(lado ==5){
                    face5++;
                }

                 else if(lado ==6){
                    face6++;
                }
                contador++;

    }


    cout << "Lado 1 teve " << face1 <<" acertos!!" << endl;
    cout << "Lado 2 teve " << face2 << " acertos!!" << endl;
    cout << "Lado 3 teve " << face3 << " acertos!!" << endl;
    cout << "Lado 4 teve " << face4 << " acertos!!" <<endl;
    cout << "Lado 5 teve " << face5 << " acertos!!" << endl;
    cout << "Lado 6 teve " << face6 << " acertos!!" << endl;


    return 0;
}
