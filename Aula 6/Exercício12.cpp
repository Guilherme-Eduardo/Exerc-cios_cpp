#include "biblaureano.h"
int main () {

    int placar, coritiba, palmeiras;

    cout << "Informe o placar do jogo Coritiba x Palmeiras " << endl;
    coritiba = readInt("Quantos gols o Coritiba marcou? ");
    palmeiras = readInt("Quantos gols o Palmeiras marcou? ");

    if(coritiba == palmeiras){
        cout << "As equipes empataram em " << coritiba << " x " << palmeiras << " !!" << endl;
    }

    else{
        if(coritiba > palmeiras){
            cout << "O Coritiba venceu pelo placar de " << coritiba << " x " << palmeiras << " !!" << endl;
        }

        else{
            if(palmeiras > coritiba){
                cout << "O Palmeiras venceu pelo placar de " << palmeiras << " x " << coritiba << " !!" << endl;
            }
        }
    }


return 0;
}
