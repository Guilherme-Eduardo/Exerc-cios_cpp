#include "biblaureano.h"
int main(){

    int jogadorID;
    int vitorias;
    int QTDMaiorVitorias;
    int QTDMenorVitorias;
    int jogadorMaisVitorioso;
    int jogadorMenosVitorioso;

    jogadorID = readInt ("INFORME O NICK DO JOGADOR: ");
    vitorias = readInt("INFORME O NUMERO DE VITORIAS: ");

    QTDMaiorVitorias = QTDMenorVitorias = jogadorID;
    QTDMaiorVitorias = QTDMenorVitorias = vitorias;

    int contador = 2;

    while (contador <=20){
        jogadorID = readInt("INFORME O NICK NAME DO JOGADOR: ");
        vitorias = readInt("INFORME O NUMERO DE VITORIAS: ");

        if (vitorias > QTDMaiorVitorias){
            jogadorMaisVitorioso = jogadorID;
            QTDMaiorVitorias = vitorias ;
        }
        if(vitorias<QTDMenorVitorias){
            jogadorMenosVitorioso = jogadorID;
            QTDMenorVitorias = vitorias;
        }
        if(vitorias ==0){
            jogadorMenosVitorioso = jogadorID;
            QTDMenorVitorias = vitorias;
        }
        contador++;
    }

    cout << "O jogador " << jogadorMaisVitorioso << " e o vencedor" << " com " << QTDMaiorVitorias << " vitorias!" << endl;

    cout << "O jogador " <<jogadorMenosVitorioso << " e o menos vitorioso com " << QTDMenorVitorias << " vitorias" << endl;





    return 0;
}
