#include "biblaureano.h"
int main () {

    float indicePoluicao;
    string foraNormas;

    cout << "Analise do indice de poluicao" << endl;
    indicePoluicao = readFloat("Informe o indice de poluicao [0.01 ate 0.10]: ");


    if(indicePoluicao >= 0.05 && indicePoluicao <=0.25){
        cout <<"O indice de poluicao das empresas esta no padrao adequado para as 3 empresas" << endl;
        return 0;
        }

        else {
            if(indicePoluicao > 0.25 && indicePoluicao <=0.3){
              foraNormas = "grupo 1";
            }

            else{
                if(indicePoluicao > 0.3 && indicePoluicao <=0.4){
                foraNormas = "Grupo 1 e 2";
                }

                else{
                    if(indicePoluicao > 0.5){
                    foraNormas = "Grupo 1, 2 e 3";
                    }
                }
            }
        }



    cout << "Com o Indice de Poluicao de " << indicePoluicao << ", as empresas do " << foraNormas << " devem interromper as atividades" << endl;

return 0;
}
