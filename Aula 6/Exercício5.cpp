#include "biblaureano.h"
int main () {

    int idadeEmDias, meses, anosDeVida, diasTotais;

    idadeEmDias = readInt("Informe abaixo a sua idade em dias:");
    meses = idadeEmDias / 30 ;
    anosDeVida = idadeEmDias / 365;

    cout << "Totais de meses vividos: " << meses << endl;
    cout << "Totais de Anos vividos: " << anosDeVida << endl;

    return 0;


}
