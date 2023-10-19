#include "biblaureano.h"
int main (){

    float despesasPagasMarido, despesasPagasEsposa, totalDespesas, percentualPagoMarido, percentualPagoEsposa, percentualPagoTotal, totalValorPago, valorDevidoMarido, valorDevidoEsposa, saldoMarido, saldoEsposa;

    despesasPagasMarido = readFloat("Insira o valor das despesas pagas pelo marido: ");
    despesasPagasEsposa = readFloat("Insira o valor das despesas pagas pela esposa: ");
    totalDespesas = despesasPagasMarido + despesasPagasEsposa;

    percentualPagoMarido = (despesasPagasMarido / totalDespesas) * 100.0;
    percentualPagoEsposa = (despesasPagasEsposa / totalDespesas) * 100.0;;
    percentualPagoTotal = percentualPagoMarido + percentualPagoEsposa;

    valorDevidoMarido = totalDespesas * 0.6;
    valorDevidoEsposa = totalDespesas * 0.4;

    saldoMarido = despesasPagasMarido - valorDevidoMarido;
    saldoEsposa = despesasPagasEsposa - valorDevidoEsposa;

    cout << "Despesas pagas pelo marido =  " << despesasPagasMarido << endl;
    cout << "Despesas pagas pela esposa = " << despesasPagasEsposa << endl;
    cout << "" << endl;
    cout << "ITEM           MARIDO      ESPOSA      TOTAL" << endl;
    cout << "===========    ======      =======     ======" <<endl;
    cout << "Desp. Pagas:    " <<  despesasPagasMarido << "          " << despesasPagasEsposa  << "        " << totalDespesas << endl;
    cout << "% Pago:         " << percentualPagoMarido << "           " << percentualPagoEsposa << "         " << percentualPagoTotal << endl;
    cout << "Valor Devido:   " << valorDevidoMarido    << "          " << valorDevidoEsposa    << "        " << totalDespesas << endl;
    cout << "Saldo:         "  << saldoMarido          << "          " << saldoEsposa          << "       " << endl;
    cout <<""<< endl;

    cout << "Portanto, a esposa tera que pagar o marido com o valor de: " << valorDevidoEsposa - despesasPagasMarido << endl;



    return 0;
}
