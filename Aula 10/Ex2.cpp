#include "biblaureano.h"
int main(){

    int linha = readInt("INFORME O VALOR DA LINHA DO EIXO X: ");
    int coluna = readInt ("INFORME O VALOR DA COLUNA EIXO Y: ");
    int tamanho = readInt("INFORME O TAMANHO: ");


    gotoXY(linha,coluna);
    cout << "*" << endl;

    int contador = 1;
    while (contador<=tamanho){
        if(contador%2==1){
                gotoXY(linha+contador,coluna);
                cout << "*" << endl;
                gotoXY(linha-contador,coluna);
                cout << "*" << endl;
                gotoXY(linha,coluna-contador);
                cout << "*" << endl;
                gotoXY(linha,coluna+contador);
                cout << "*" << endl;


        }
            else {
                gotoXY(linha-contador,coluna-contador);
                 cout << "*" << endl;
                 gotoXY(linha-contador,coluna+contador);
                 cout << "*" << endl;
                 gotoXY(linha+contador,coluna+contador);
                 cout << "*" << endl;
                 gotoXY(linha+contador,coluna-contador);
                 cout << "*" << endl;


            }
           contador++;
           espera(100);

    }










    return 0;
}
