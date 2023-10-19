#include "biblaureano.h"
int main (){

    float despesasPagasMarido, despesasPagasEsposa, totalDespesas, percentualPagoMarido, percentualPagoEsposa, percentualPagoTotal, totalValorPago, valorDevido, saldoMarido, saldoEsposa;

    despesasPagasMarido = 1278.60;
    despesasPagasEsposa = 875.30;
    totalDespesas = despesasPagasMarido + despesasPagasEsposa;

    percentualPagoMarido = (despesasPagasMarido / totalDespesas) * 100.0;
    percentualPagoEsposa = (despesasPagasEsposa / totalDespesas) * 100.0;
    percentualPagoTotal = percentualPagoMarido + percentualPagoEsposa;

    valorDevido = totalDespesas / 2.0;
    saldoMarido = valorDevido - despesasPagasMarido;
    saldoEsposa = valorDevido - despesasPagasEsposa;

    cout << "Despesas pagas pelo marido =  " << despesasPagasMarido << endl;
    cout << "Despesas pagas pela esposa = " << despesasPagasEsposa << endl;
    cout << "" << endl;
    cout << "ITEM           MARIDO      ESPOSA      TOTAL" << endl;
    cout << "===========    ======      ======      =====" <<endl;
    cout << "Desp. Pagas:   " <<  despesasPagasMarido << "       " << despesasPagasEsposa << "       " << totalDespesas << endl;
    cout << "% Pago:        " << percentualPagoMarido << "     " << percentualPagoEsposa << "      " << percentualPagoTotal << endl;
    cout << "Valor Devido:  " << valorDevido << "      " << valorDevido << "     " << totalDespesas << endl;
    cout << "Saldo:         " << saldoMarido << "      " << saldoEsposa << "     " << endl;
    cout <<""<< endl;

    cout << "Portanto, a esposa tera que pagar o marido com o valor de: " << valorDevido - despesasPagasMarido << endl;



    return 0;


}
