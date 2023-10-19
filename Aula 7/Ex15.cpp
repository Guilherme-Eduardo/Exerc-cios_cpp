#include "biblaureano.h"
int main(){

    float receitaEmpresa = readFloat ("Informe o valor da receita de uma determinada empresa: ");
    float despesaEmpresa = readFloat("Informe o valor total de despesas desta empresa: ");
    float calculo = receitaEmpresa - despesaEmpresa;

    if(calculo > 0){
    cout << "A empresa possui um lucro de: " << calculo << endl;
    }
    else if(calculo <0){
    cout << "A empresa possui um prejuizo de: " << calculo << endl;
    }

return 0;
}
