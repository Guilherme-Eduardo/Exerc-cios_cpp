#include "biblaureano.h"
int main(){

    float latao, cobre, zinco;

    latao = readFloat("Informe a quantidade desejada de latao: ");
    cout << ""  << endl;

    cobre = latao * 0.7;
    zinco = latao * 0.3;



    cout << "Para formar " << latao << " peca(s)de latao voce precisara de " << cobre << " pecas de cobre e " << zinco << " pecas de zinco " << endl;

return 0;
}
