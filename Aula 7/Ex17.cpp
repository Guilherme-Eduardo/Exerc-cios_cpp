#include "biblaureano.h"
int main(){

    float renda = readInt("Informe o valor de sua renda para calcular o IMPOSTO X: ");

        if(renda <= 1200.00){
        cout << "Voce esta isento de pagar o imposto X :)" << endl;
        }
        else if(renda >= 1201.00 && renda <= 5000.00 ){
            cout << "Voce devera pagar o valor de " << renda * 0.1  << " referente ao IMPOSTO X" << endl;
        }
        else if(renda >= 5001.00 && renda <= 10000.00){
            cout << "Voce devera pagar o valor de " << renda * 0.15  << " referente ao IMPOSTO X" << endl;
        }
        else if(renda >=10001.00){
            cout << "Voce devera pagar o valor de " << renda * 0.20  << " referente ao IMPOSTO X" << endl;
        }


return 0;
}
