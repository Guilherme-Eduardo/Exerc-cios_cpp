#include "biblaureano.h"
int main() {

    int anosFumante, qtdCigarroDia, precoCarteira, valorGasto;

    anosFumante = readInt("Informe a quantidade de anos que a pessoa fuma: ");
    qtdCigarroDia = readInt("Informe a quantidade de cigarros fumados por dia: ");
    precoCarteira = readInt("Informe o valor de uma carteira de cigarros: ");

    valorGasto = precoCarteira * (qtdCigarroDia/20) * (anosFumante * 365);

    cout << "O total de gastos e de: " << valorGasto << endl;




return 0;
}
