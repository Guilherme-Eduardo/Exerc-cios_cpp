#include "biblaureano.h"
int main(){

    int distanciaTrabalho = 800;
    int diasTrabalhadosSemana = 5;
    int semanasTrabalhadasAno = 45;

    int calculoDistancia = ((distanciaTrabalho * 2) * diasTrabalhadosSemana * semanasTrabalhadasAno) / 1000;
     //Dividi por 1000 para converter de M para KM


    cout << "A distancia percorrida durante um ano e de:" << calculoDistancia << endl ;

    return 0;





}
