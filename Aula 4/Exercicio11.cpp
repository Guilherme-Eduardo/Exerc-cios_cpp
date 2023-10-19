#include "biblaureano.h"
int main(){

    cout << "\n\tBOLETIM BASICO" << endl;
    cout << "" << endl;

    float primeiroBimestre = readFloat("Insira o valor da sua nota no primeiro bimestre: ");
    float segundoBimestre = readFloat("Insira o valor da sua nota no segundo bimestre: ");

    const float pesoProvaUm = 2.0;
    const float pesoProvaDois = 3.0;

    float notaSemestre =((primeiroBimestre * pesoProvaUm) + (segundoBimestre * pesoProvaDois)) / (pesoProvaUm + pesoProvaDois);

    cout << "A nota do semestre: " << notaSemestre << endl;

    return 0;









}
