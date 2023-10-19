//programa_002.cpp
#include "biblaureano.h"

int main(){
    int xInicial, xFinal, yInicial, yFinal;

    xInicial = 1; //posição inicial na tela
    xFinal   = 79; //posição final na tela

    yInicial = 1; //posição inicial na tela
    yFinal   = 24; //posição final na tela

    int cor = 1; // começa com a cor  vermelha (linux) ou azul (windows)
    while( yInicial <= yFinal ){
        mudaCor((COR)cor); //muda a cor

        //imprime as colunas (linhas da esquerda e direita) do quadrado
        int Y = yInicial;
        while( Y<=yFinal ){
            gotoXY(xInicial, Y);
            cout << "#";

            gotoXY(xFinal, Y);
            cout << "#";
            ++Y;
            espera(10);
        }
        //imprime as linhas de cima e baixo do quadrado
        int X = xInicial;
        while( X<xFinal ){
            gotoXY(X,yInicial);
            cout << "#";

            gotoXY(X,yFinal);
            cout << "#";

            ++X;
            espera(10);
        }
        ++cor; //muda para a próxima cor
        if(cor > QTY_COR ){
           cor=1; // volta para a cor inicial
        }
        xInicial+=2; //aumenta a coluna inicial em 2
        xFinal-=2;   //diminui a coluna final em 2
        ++yInicial;  //aumenta a linha inicial
        --yFinal;    //diminui a linha final
        espera(10); //pausa 1 segundo
    }
    getch();
    return 0;
}
