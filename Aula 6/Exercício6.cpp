#include "biblaureano.h"
int main () {

    int p, e, m;

    p = readInt("Informe o peso do peixe: ");

    if(p > 1 && p<=50){
        e = 0;
        m = 0;
        cout << "O peixe esta dentro das normas estabelecidas!!!" << endl;
        cout << "Excesso: " << e << endl;
        cout << "Multa: " << m << endl;
    }

    else{
        if(p > 50){
            e = p - 50;
            m = e * 7.00;
            cout << "Ops... o peso do peixe ultrapassou os limites por " << e << " KG. Portanto, voce devera pagar uma taxa de: " << m << " reais." << endl;
        }

        else{
            if(!p){
            cout << "Valor invalido" << endl;
            }
        }
    }



return 0;
}
