#include "biblaureano.h"
int main (){

int idade, meses, dias, anosDeVida, mesesDeVida, diasDeVida, diasDeVidaGeral;

    idade = readInt("Informe a sua idade atual: ");
    meses = readInt("Informe os meses: ");
    dias = readInt ("Informe os dias: ");

    anosDeVida = idade *1;
    meses = meses ;
    dias = dias;
    mesesDeVida = (idade * 12) + meses;
    diasDeVida = (idade * 365) + (meses*30) + dias;

    cout << "Voce possui " << anosDeVida << " anos "<< meses << " meses e " << dias << " dias de vida" << endl;
    cout << "Voce possui " << mesesDeVida << " meses de vida totais " << endl;
    cout << "Voce possui " << diasDeVida << " dias vividos no geral " << endl;


return 0;
}
