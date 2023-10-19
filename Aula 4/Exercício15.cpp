#include "biblaureano.h"
int main (){

    float rendaMarido, rendaEsposa, proporcao, despesasPagasMarido, despesasPagasEsposa, totalDespesas, percentualPagoMarido, percentualPagoEsposa, percentualPagoTotal, totalValorPago, percentualDevidoMarido, percentualDevidoEsposa, saldoMarido, saldoEsposa;

    rendaMarido = readFloat ("Informe a renda mensal do Marido: ");
    rendaEsposa = readFloat ("Informe a renda mensal da Esposa: ");

    despesasPagasMarido = readFloat("Insira o valor das despesas pagas pelo marido: ");
    despesasPagasEsposa = readFloat("Insira o valor das despesas pagas pela esposa: ");

    totalDespesas = despesasPagasMarido + despesasPagasEsposa;

    percentualDevidoMarido = (rendaMarido / totalDespesas)*100;
    percentualDevidoEsposa = (rendaEsposa / totalDespesas)*100;

    percentualPagoMarido = (despesasPagasMarido / totalDespesas) * 100.0;
    percentualPagoEsposa = (despesasPagasEsposa / totalDespesas) * 100.0;
    percentualPagoTotal = percentualPagoMarido + percentualPagoEsposa;

    saldoMarido = despesasPagasMarido - percentualDevidoMarido;
    saldoEsposa = despesasPagasEsposa - percentualDevidoEsposa;

    cout << "Despesas pagas pelo marido =  " << despesasPagasMarido << endl;
    cout << "Despesas pagas pela esposa = " << despesasPagasEsposa << endl;
    cout << "" << endl;
    cout << "ITEM           MARIDO      ESPOSA      TOTAL" << endl;
    cout << "===========    ======      =======     ======" <<endl;
    cout << "Desp. Pagas:    " <<  despesasPagasMarido << "         " << despesasPagasEsposa  << "       " << totalDespesas << endl;
    cout << "% Pago:         " << percentualPagoMarido << "           " << percentualPagoEsposa << "         " << percentualPagoTotal << endl;
    cout << "Valor Devido:   " << percentualDevidoMarido<<"           " << percentualDevidoEsposa    << "         " << "" << endl;
    cout << "Saldo:         "  << saldoMarido          << "           " << saldoEsposa          << "        " << endl;
    cout <<""<< endl;
}
    //cout << "Portanto, a esposa tera que pagar o marido com o valor de: " << valorDevidoEsposa - despesasPagasMarido << endl;


