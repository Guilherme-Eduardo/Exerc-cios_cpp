#include "biblaureano.h"
int main(){

    float prestacao, taxa, diasAtrasados, calculo;

    prestacao = readFloat("Informe o valor pendente da parcela (Sem Juros): ");
    taxa = readFloat("Informe o valor da taxa")/100;
    diasAtrasados = readFloat("Informe o total de dias em atraso: ");
    calculo = prestacao*taxa*diasAtrasados;

    cout << "O valor atual e de: " << calculo << endl;

    return 0;

}
